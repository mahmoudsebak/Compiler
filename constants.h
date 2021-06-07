#pragma once

enum Type {
    TYPE_INT,
    TYPE_DOUBLE,
    TYPE_CHAR,
    TYPE_BOOL,
    TYPE_VOID
};

enum Kind {
    KIND_VAR,
    KIND_PAR,
    KIND_FUN
};

enum Modifier {
    MOD_CONST,
    NO_MOD
};

enum Node_Type {
    CONST_NODE,
    ID_NODE,
    OP_NODE
};

