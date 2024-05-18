#pragma once
#include "threeboltBaseVisitor.h"
#include "errorlogger.h"
#include "scopetable.h"

class TypeChecker : public threeboltBaseVisitor {
private:
    ErrorLogger &errorLogger;
    ScopeTable &scopeTable;

    /// @brief longname of the current scope we're in. Matches to a value in scopeTable.scopes
    std::string longname;

public:
    TypeChecker(ErrorLogger& errorLogger, ScopeTable& scopeTable) : errorLogger(errorLogger), scopeTable(scopeTable), longname("global"){}

    std::any visitVariableDecl(threeboltParser::VariableDeclContext *ctx) override;
    std::any visitAssignment(threeboltParser::AssignmentContext *ctx) override;
    std::any visitFunctionCall(threeboltParser::FunctionCallContext *ctx) override;
    std::any visitFunctionDecl(threeboltParser::FunctionDeclContext *ctx) override;
    std::any visitExpr(threeboltParser::ExprContext *ctx) override;
    std::any visitExprStmt(threeboltParser::ExprStmtContext *ctx) override;
    std::any visitParameters(threeboltParser::ParametersContext *ctx) override;
    std::any visitParameter(threeboltParser::ParameterContext *ctx) override;
    std::any visitType(threeboltParser::TypeContext *ctx) override;
};