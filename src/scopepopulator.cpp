#include "scopepopulator.h"
#include <iostream>
#include <format>
#include <vector>
#include <algorithm>
#include <numeric>

// Function to join vector of strings with a delimiter
std::string joinWithUnderscore(const std::vector<std::string>& strings) {
    if (strings.empty()) {
        return "";
    }
    return std::accumulate(std::next(strings.begin()), strings.end(), strings[0],
                           [](const std::string& a, const std::string& b) {
                               return a + "," + b;
                           });
}

// std::any ExampleVisitor::visitProgram(threeboltParser::ProgramContext *ctx) {
//     std::cout << "Visiting Program" << std::endl;
//     return ctx;
// }

std::any ScopePopulator::visitFunctionDecl(threeboltParser::FunctionDeclContext *ctx) {
    auto paramTypeNames = ctx->parameters() ? joinWithUnderscore(std::any_cast<std::vector<std::string>>(visit(ctx->parameters()))) : "";
    
    auto shortname = ctx->ID()->toString();
    if (paramTypeNames != "") {
        shortname = std::format("{}({})", shortname, paramTypeNames);
    }

    // Check if symbol already defined in this scope (or any parent scope)
    if (!scopeStack.empty() && scopeStack.top()->find_symbol(shortname)) {
        throw std::runtime_error(std::format("Symbol {} already defined in previous scope.", shortname));
    }
    scopeStack.top()->add_symbol(std::make_shared<Symbol>(shortname, Type::FN));

    // Create new scope and push it onto the stack
    auto scope = std::make_unique<Scope>(shortname, scopeStack.empty() ? nullptr : scopeStack.top().get());
    scopeStack.push(std::move(scope));
    std::cout << "New function scope created: " << shortname << std::endl;

    // enter fn
    const auto &in = scopeStack.top();
    std::cout << "Entering scope: " << in->get_longname() << std::endl;

    // Pop current scope
    scopeStack.pop();
    if (!scopeStack.empty()) {
        std::cout << "Exiting current scope (end of function). Current scope is now: " << scopeStack.top()->get_longname() << std::endl;
    } else {
        std::cout << "Exiting current scope (end of function). No parent scope." << std::endl;
    }

    return ctx;
}

std::any ScopePopulator::visitParameters(threeboltParser::ParametersContext *ctx) {

    std::vector<std::string> paramTypeNames;

    for (auto pctx : ctx->parameter()) {
        auto paramType = std::any_cast<std::string>(visit(pctx));
        paramTypeNames.push_back(paramType);
    }

    return paramTypeNames;
}

std::any ScopePopulator::visitParameter(threeboltParser::ParameterContext *ctx) {
    return visit(ctx->type());
}

std::any ScopePopulator::visitType(threeboltParser::TypeContext *ctx) {
    return ctx->getText();
}