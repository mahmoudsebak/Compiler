#pragma once
#include <vector>
#include<map>
#include<string>
#include "constants.h"
using namespace std;


struct SymbolTable {
    int symType[26];
    int symKind[26];
    int symMod[26];
    bool exists[26];
    bool used[26];
    bool initialized[26];
    int id;

    SymbolTable* par;
    vector<SymbolTable*> children;

    SymbolTable(int i) {
        par = NULL;
        id = i;
        for (int i = 0 ; i < 26; ++i) {
            exists[i] = false;
            used[i] = false;
        }
    }

    void reportUnusedVariables() {
        for (int i =0; i < 26; ++i) {
            if(exists[i] && !used[i]) {
                printf("Variable %c declared but never used!\n", i+'a');
            }
        }
    }

    void print() {
        printf("** Symbol Table %d **\n", id);
        int parID = par != NULL ? par->id : -1;
        printf("** Parent ID %d **\n\n", parID);
         printf("ID  TYPE  KIND  MOD  USED  INITIALIZED\n\n");
        for (int i = 0; i < 26; ++i) {
            if(exists[i]) {
                printf("%c  %d  %d  %d  %d  %d\n\n", i+'a', symType[i], symKind[i], symMod[i], used[i], initialized[i]);
            }
        }
    }

};