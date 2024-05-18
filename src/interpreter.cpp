#include "interpreter.h"
#include <format>

void Interpreter::push_stack(const std::string& shortname) {
    auto stackName = scopeStack.top()->get_longname() + "::" + shortname;
    if (auto stack = this->scopeTable.get_scope(stackName)) {
        scopeStack.push(stack);
    }
    throw std::runtime_error(std::format("Stack with shortname {} (longname {}) either is not in scope or cannot be found.", shortname, stackName));
}

void Interpreter::pop_stack() {
    this->scopeStack.pop();
}

std::any Interpreter::visitVariableDecl(threeboltParser::VariableDeclContext *ctx) {
    auto varName = ctx->ID()->getText();
    auto symbol = scopeStack.top()->find_symbol(varName);
    if (!symbol) {
        throw std::runtime_error(std::format("Variable with shortname {} is either not in scope {} or cannot be found.", varName, scopeStack.top()->get_longname()));
    }
}

std::any Interpreter::visitAssignment(threeboltParser::AssignmentContext *ctx) {

}

std::any Interpreter::visitFunctionCall(threeboltParser::FunctionCallContext *ctx) {

}

std::any Interpreter::visitFunctionDecl(threeboltParser::FunctionDeclContext *ctx) {

}

std::any Interpreter::visitExpr(threeboltParser::ExprContext *ctx) {

}

std::any Interpreter::visitExprStmt(threeboltParser::ExprStmtContext *ctx) {

}

std::any Interpreter::visitParameters(threeboltParser::ParametersContext *ctx) {

}

std::any Interpreter::visitParameter(threeboltParser::ParameterContext *ctx) {

}

std::any Interpreter::visitType(threeboltParser::TypeContext *ctx) {

}

std::any Interpreter::visitBlock(threeboltParser::BlockContext *ctx) {

}

std::any Interpreter::visitIfStmt(threeboltParser::IfStmtContext *ctx) {

}

std::any Interpreter::visitElseIfStmt(threeboltParser::ElseIfStmtContext *ctx) {

}

std::any Interpreter::visitElseStmt(threeboltParser::ElseStmtContext *ctx) {

}

std::any Interpreter::visitReturnStmt(threeboltParser::ReturnStmtContext *ctx) {}