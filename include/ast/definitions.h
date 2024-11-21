#ifndef AST_DEFINITIONS_H
#define AST_DEFINITIONS_H

typedef enum {
    NODE_PROGRAM,
    NODE_NUMERIC_LITERAL,
    NODE_IDENTIFIER,
    NODE_BINARY_EXPR
} NodeType;

typedef struct AstNode AstNode;

typedef struct {
    double value;
} NumericLiteralNode;

typedef struct {
    const char *symbol;
} IdentifierNode;

typedef struct {
    AstNode *left;
    AstNode *right;
    char *operator;
} BinaryExprNode;

typedef struct {
    AstNode **statements;
    size_t statement_count;
} ProgramNode;

struct AstNode {
    NodeType kind;
    void *data;
    AstNode **children;
    size_t child_count;
};

#endif // AST_DEFINITIONS_H