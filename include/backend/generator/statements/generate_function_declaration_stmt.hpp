#ifndef GENERATE_FUNCTION_DECLARATION_STMT_H
#define GENERATE_FUNCTION_DECLARATION_STMT_H

extern "C" {
  #include "frontend/ast/definitions.h"
}
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Value.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/BasicBlock.h>


llvm::Value* generate_function_declaration_stmt(FunctionNode *node, llvm::LLVMContext &Context, llvm::Module &Module, llvm::IRBuilder<> &Builder);

#endif // GENERATE_FUNCTION_DECLARATION_STMT_H