#pragma once

#include "threeboltBaseVisitor.h"
#include "scope.h"
#include <memory>

class ScopePopulator : public threeboltBaseVisitor {
    std::stack<std::unique_ptr<Scope>> scopeStack;

public:
    ScopePopulator() {
        scopeStack.push(std::make_unique<Scope>("global"));
    }

    // std::any visitProgram(threeboltParser::ProgramContext *ctx) override;

    /// @brief Returns ??
    /// @param ctx 
    /// @return Returns ??
    std::any visitFunctionDecl(threeboltParser::FunctionDeclContext *ctx) override;

    /// @brief 
    /// @param ctx 
    /// @return A std::vector<std::string> of the TYPE names of each parameter
    std::any visitParameters(threeboltParser::ParametersContext *ctx) override;

    std::any visitParameter(threeboltParser::ParameterContext *ctx) override;

    std::any visitType(threeboltParser::TypeContext *ctx) override;
};