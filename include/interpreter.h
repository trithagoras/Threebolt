#pragma once
#include "threeboltBaseVisitor.h"
#include <stack>
#include "scope.h"
#include "errorlogger.h"
#include "scopetable.h"

class Interpreter : public threeboltBaseVisitor {
    std::stack<std::shared_ptr<Scope>> scopeStack;
    ErrorLogger& errorLogger;
    ScopeTable& scopeTable;

public:
    Interpreter(ErrorLogger& errorLogger, ScopeTable& scopeTable) : errorLogger(errorLogger), scopeTable(scopeTable) {
        scopeStack.push(scopeTable.get_scope("global"));
    }

    /// @brief Enters into the stack that matches the name "shortname". It must be accessible from the current stack.
    /// @param shortname e.g. sum(float,float), main()::1::0, etc.
    void push_stack(const std::string& shortname);
    void pop_stack();

    std::any visitVariableDecl(threeboltParser::VariableDeclContext *ctx) override;
    std::any visitAssignment(threeboltParser::AssignmentContext *ctx) override;
    std::any visitFunctionCall(threeboltParser::FunctionCallContext *ctx) override;
    std::any visitFunctionDecl(threeboltParser::FunctionDeclContext *ctx) override;
    std::any visitExpr(threeboltParser::ExprContext *ctx) override;
    std::any visitExprStmt(threeboltParser::ExprStmtContext *ctx) override;
    std::any visitParameters(threeboltParser::ParametersContext *ctx) override;
    std::any visitParameter(threeboltParser::ParameterContext *ctx) override;
    std::any visitType(threeboltParser::TypeContext *ctx) override;
    std::any visitBlock(threeboltParser::BlockContext *ctx) override;
    std::any visitIfStmt(threeboltParser::IfStmtContext *ctx) override;
    std::any visitElseIfStmt(threeboltParser::ElseIfStmtContext *ctx) override;
    std::any visitElseStmt(threeboltParser::ElseStmtContext *ctx) override;
    std::any visitReturnStmt(threeboltParser::ReturnStmtContext *ctx) override;
};