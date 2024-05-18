#pragma once
#include "threeboltBaseVisitor.h"
#include "errorlogger.h"
#include "scopetable.h"

class TypeChecker : public threeboltBaseVisitor {
private:
    ErrorLogger &errorLogger;
    ScopeTable &scopeTable;

    // A raw pointer to the current function we're in. Can be nullptr.
    Symbol* currentFunction;

    /// @brief longname of the current scope we're in. Matches to a value in scopeTable.scopes
    std::string longname;

public:
    TypeChecker(ErrorLogger& errorLogger, ScopeTable& scopeTable) : errorLogger(errorLogger), scopeTable(scopeTable), longname("global"), currentFunction(nullptr){}

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
    // std::any visitStatement(threeboltParser::StatementContext *ctx) override;
    std::any visitIfStmt(threeboltParser::IfStmtContext *ctx) override;
    std::any visitElseIfStmt(threeboltParser::ElseIfStmtContext *ctx) override;
    std::any visitElseStmt(threeboltParser::ElseStmtContext *ctx) override;
    std::any visitReturnStmt(threeboltParser::ReturnStmtContext *ctx) override;
};