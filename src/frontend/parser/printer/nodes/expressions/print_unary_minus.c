#include "frontend/parser/printer/nodes/expressions/print_unary_minus.h"
#include "frontend/parser/printer/visited.h"
#include "frontend/ast/definitions.h"
#include "frontend/parser/printer/print_indent.h"
#include "frontend/parser/printer/print_ast.h"

void print_unary_minus(const AstNode* node, int depth, VisitedNodes* visited) {
    UnaryMinusExpr* unary_minus_expr = (UnaryMinusExpr*)node->data;
    
    print_indent(depth + 1);
    
    if (unary_minus_expr) {
        if (unary_minus_expr->op) {
            printf("Operand:\n");
            print_ast_node(unary_minus_expr->op, depth + 2, visited);
        } else {
            printf("Operand: <NULL OPERAND>\n");
        }
    } else {
        printf("Operand: <NULL>\n");
    }
}