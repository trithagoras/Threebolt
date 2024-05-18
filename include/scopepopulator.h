#pragma once

#include "threeboltBaseVisitor.h"
#include "scope.h"
#include <memory>
#include "errorlogger.h"
#include "scopetable.h"

class ScopePopulator : public threeboltBaseVisitor {
private:
    std::stack<std::shared_ptr<Scope>> scopeStack;
    ErrorLogger& errorLogger;
    ScopeTable& scopeTable;

public:
    ScopePopulator(ErrorLogger& errorLogger, ScopeTable& scopeTable) : errorLogger(errorLogger), scopeTable(scopeTable) {
        scopeStack.push(std::make_shared<Scope>("global"));
        scopeTable.add_scope(scopeStack.top());
    }

    void push_scope(const std::string& name);

    /// @brief Returns ??
    /// @param ctx 
    /// @return Returns ??
    std::any visitFunctionDecl(threeboltParser::FunctionDeclContext *ctx) override;

    /// @brief 
    /// @param ctx 
    /// @return A std::vector<Symbol> of the currently proposed definition of each parameter
    std::any visitParameters(threeboltParser::ParametersContext *ctx) override;

    /// @brief 
    /// @param ctx 
    /// @return A Symbol with the name and proposed type
    std::any visitParameter(threeboltParser::ParameterContext *ctx) override;

    /// @brief 
    /// @param ctx 
    /// @return The Type value 
    std::any visitType(threeboltParser::TypeContext *ctx) override;

    std::any visitIfStmt(threeboltParser::IfStmtContext *ctx) override;

    std::any visitVariableDecl(threeboltParser::VariableDeclContext *ctx) override;
};