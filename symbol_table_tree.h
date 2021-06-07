#pragma once
#include "symbol_table.h"
#include "constants.h"
#include <queue>
#include <vector>

using namespace std;

class SymbolTableTree {
	SymbolTable* root;
	SymbolTable* current;
	int id;

	void dfs_unusedVariables(SymbolTable* cur) {
		cur->reportUnusedVariables();
		for (auto v : cur->children) {
			dfs_unusedVariables(v);
		}
	}

public:
	SymbolTableTree() {
		id = 0;
		root = NULL;
		current = NULL;
		this->create();
	}

	void create() {
		// printf("Creating new symbol table\n");
		if (root == NULL) {
			root = new SymbolTable(id++);
			current = root;
		}
		else {
			SymbolTable* table = new SymbolTable(id++);
			current->children.push_back(table);
			table->par = current;
			current = table;
		}
	}

	bool insert(char id, int kind, int type, int modifier) {
		// Already exists
		if (current->exists[id-'a']) {
			return false;
		}

		// printf("Inserting new entry in the symbol table\n");
		current->symType[id-'a'] = type;
		current->symKind[id-'a'] = kind;
		current->symMod[id-'a'] = modifier;
		current->exists[id-'a'] = true;
		return true;
	}

	bool lookup(char id) {
		// Exists
		SymbolTable* cur = current;
		while (cur != NULL) {
			if (cur->exists[id-'a']) {
				return true;
			}

			cur = cur->par;
		}

		return false;
	}

	bool isInitialized(char id) {
		// Exists
		SymbolTable* cur = current;
		while (cur != NULL) {
			if (cur->exists[id-'a']) {
				return cur->initialized[id-'a'];
			}

			cur = cur->par;
		}
		return false;
	}

	void markInitialized(char id) {
		// Exists
		SymbolTable* cur = current;
		while (cur != NULL) {
			if (cur->exists[id-'a']) {
				cur->initialized[id-'a'] = true;
			}
			cur = cur->par;
		}
	}

	void markUsed(char id) {
		// Exists
		SymbolTable* cur = current;
		while (cur != NULL) {
			if (cur->exists[id-'a']) {
				cur->used[id-'a'] = true;
			}
			cur = cur->par;
		}
	}

	int getType(char id) {
		int type;
		SymbolTable* cur = current;
		while (cur != NULL) {
			if (cur->exists[id-'a']) {
				type = cur->symType[id-'a'];
				break;
			}

			cur = cur->par;
		}

		return type;
	}

	void up() {
		// printf("Moving Up to the parent table\n");
		current = current->par;
	}

	void unusedVariables() {
		dfs_unusedVariables(root);
	}

	void print() {
		queue<SymbolTable*> q;
		q.push(root);
		while(!q.empty()) {
			SymbolTable* cur = q.front();
			q.pop();
			cur->print();
			for (auto v : cur->children) {
				q.push(v);
			}
		}
	}
};