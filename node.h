#include "constants.h"

/* constants */

struct conNodeType{
    union {
        int ivalue;
        char cvalue;
        bool bvalue;
        double dvalue;
    };
};

/* identifiers */
struct idNodeType{
    char id;                      /* subscript to sym array */
};

/* operators */
struct oprNodeType{
    int op;                   /* operator */
    int nops;                   /* number of operands */
    struct nodeType* operands[4];	
};

struct nodeType {
    int type;              /* type of node */
    int expr_type;

    union {
        struct conNodeType conNode;        /* constants */
        struct idNodeType idNode;          /* identifiers */
        struct oprNodeType opNode;        /* operators */
    };
};