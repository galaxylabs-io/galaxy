#include "../../../../../include/parser/printer/nodes/print_unary_bitwise_not.h"
#include "../../../../../include/parser/printer/visited.h"
#include "../../../../../include/ast/definitions.h"
#include "../../../../../include/parser/printer/print_indent.h"
#include "../../../../../include/parser/printer/print_ast.h"

void print_unary_bitwise_not(const AstNode *node, int depth, VisitedNodes *visited) {
  UnaryBitwiseNotExpr *bitwise_not_data = (UnaryBitwiseNotExpr *)node->data;

  print_indent(depth + 1);

  if (bitwise_not_data) {
    if (bitwise_not_data->op){
      printf("Operand:\n");
      print_ast_node(bitwise_not_data->op, depth + 2, visited);
    } else {
      printf("Operand: <NULL OPERAND>\n");                    
      }
  } else {
    printf("Operand: <NULL>\n");
  }
}