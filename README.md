# Compiler
Simple Programming Language using Lex and Yacc

# Building
- flex lex.l
- bison -dy grammar.y
- g++ y.tab.c lex.yy.c

# Running using the excutable file
- `a.exe [file path]` ex. `a.exe syntax_error.cpp`


# Output
- The output files will be generated in the "outputs" folder.
