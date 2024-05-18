#include "typechecker.h"
#include <format>

// TODO: ========== THIS IS DUPLICATED CODE IN TYPECHECKER.CPP =========
std::string join_param_types(const std::vector<Type>& types) {
    std::vector<std::string> typeStrings;
    std::transform(types.begin(), types.end(), std::back_inserter(typeStrings), [](const Type& type) {
        return type_to_str(type);
    });

    std::ostringstream oss;
    std::copy(typeStrings.begin(), typeStrings.end(), std::ostream_iterator<std::string>(oss, ","));
    std::string result = oss.str();
    if (!result.empty()) {
        result.pop_back(); // remove the trailing comma
    }
    return result;
}
// ========================================================================

std::any TypeChecker::visitType(threeboltParser::TypeContext *ctx) {
    return str_to_type(ctx->getText()); // TOOD: only works for now while there are not user defined types
}

std::any TypeChecker::visitVariableDecl(threeboltParser::VariableDeclContext *ctx) {
    // set symbol information
    auto& scope = scopeTable.get_scopes().at(longname);
    auto symbol = scope->find_symbol(ctx->ID()->getText());

    auto actualType = std::any_cast<Type>(visit(ctx->expr()));

    if (ctx->type()) {
        auto expectedType = std::any_cast<Type>(visit(ctx->type()));
        auto retT = coerce(actualType, expectedType);
        if (retT == Type::UNKNOWN) {
            errorLogger.logError(std::format("Cannot coerce declaration expected type {} with actual type {}", type_to_str(expectedType), type_to_str(actualType)), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
        }
        symbol->type = retT;
        return retT;
    }

    symbol->type = actualType;

    return actualType;
}

std::any TypeChecker::visitAssignment(threeboltParser::AssignmentContext *ctx) {
    // check if lvalue is a declared symbol

    // if (ctx->ASSIGN)
    return Type::UNKNOWN;
}

std::any TypeChecker::visitFunctionCall(threeboltParser::FunctionCallContext *ctx) {
    return Type::UNKNOWN;
}

std::any TypeChecker::visitParameters(threeboltParser::ParametersContext *ctx) {
    return ctx;     // todo: does this function need to exist?
}

std::any TypeChecker::visitParameter(threeboltParser::ParameterContext *ctx) {
    return visit(ctx->type());
}

std::any TypeChecker::visitFunctionDecl(threeboltParser::FunctionDeclContext *ctx) {
    // todo: ensure explicitly states return type (if exists) match with actual return type

    auto s = longname;

    // enter scope
    longname += "::" + ctx->ID()->getText();

    std::vector<Type> paramTypes;
    if (ctx->parameters()) {
        for (auto param : ctx->parameters()->parameter()) {
            paramTypes.push_back(std::any_cast<Type>(visit(param)));
        }
        longname += "(" + join_param_types(paramTypes) + ")";
    }

    auto& scope = scopeTable.get_scopes().at(longname);

    // auto actualType = std::any_cast<Type>(visit(ctx->block()));

    // if (ctx->type()) {
    //     auto expectedType = visit(ctx->type());
        
    // }

    // pop out of scope
    longname = s;

    return Type::UNKNOWN;
}

std::any TypeChecker::visitExprStmt(threeboltParser::ExprStmtContext *ctx) {
    return visit(ctx->expr());
}

std::any TypeChecker::visitExpr(threeboltParser::ExprContext *ctx) {
    if (ctx->ID()) {
        // return symbol table type info
        auto& scope = scopeTable.get_scopes().at(longname);
        auto symbol = scope->find_symbol(ctx->ID()->getText());
        return symbol->type;
    }

    if (ctx->functionCall()) {
        return visit(ctx->functionCall());
    }

    if (ctx->INT_LITERAL()) {
        return Type::INT;
    }
    if (ctx->FLOAT_LITERAL()) {
        return Type::FLOAT;
    }
    if (ctx->STRING_LITERAL()) {
        // return Type::S
    }
    if (ctx->CHAR_LITERAL()) {
        return Type::CHAR;
    }
    if (ctx->BOOL_LITERAL()) {
        return Type::BOOL;
    }

    auto expr = ctx->expr();

    // ops (ignoring any overloading for the time being!)
    if (ctx->PLUS()) {
        auto lhs = std::any_cast<Type>(visit(expr[0]));
        auto rhs = std::any_cast<Type>(visit(expr[1]));
        auto t = coerce(lhs, rhs);
        if (t == Type::UNKNOWN) {
            errorLogger.logError(std::format("Cannot get type of expression: {}+{}", expr[0]->getText(), expr[1]->getText()), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
        }
        return t;
    }

    if (ctx->MINUS()) {
        auto lhs = std::any_cast<Type>(visit(expr[0]));
        auto rhs = std::any_cast<Type>(visit(expr[1]));
        auto t = coerce(lhs, rhs);
        if (t == Type::UNKNOWN) {
            errorLogger.logError(std::format("Cannot get type of expression: {}-{}", expr[0]->getText(), expr[1]->getText()), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
        }
        return t;
    }

    if (ctx->STAR()) {
        auto lhs = std::any_cast<Type>(visit(expr[0]));
        auto rhs = std::any_cast<Type>(visit(expr[1]));
        auto t = coerce(lhs, rhs);
        if (t == Type::UNKNOWN) {
            errorLogger.logError(std::format("Cannot get type of expression: {}*{}", expr[0]->getText(), expr[1]->getText()), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
        }
        return t;
    }

    if (ctx->DIV()) {
        auto lhs = std::any_cast<Type>(visit(expr[0]));
        auto rhs = std::any_cast<Type>(visit(expr[1]));
        auto t = coerce(lhs, rhs);
        if (t == Type::UNKNOWN) {
            errorLogger.logError(std::format("Cannot get type of expression: {}/{}", expr[0]->getText(), expr[1]->getText()), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
        }
        return t;
    }

    if (ctx->MOD()) {
        auto lhs = std::any_cast<Type>(visit(expr[0]));
        auto rhs = std::any_cast<Type>(visit(expr[1]));
        auto t = coerce(lhs, rhs);
        if (t == Type::UNKNOWN) {
            errorLogger.logError(std::format("Cannot get type of expression: {}%{}", expr[0]->getText(), expr[1]->getText()), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
        }
        return t;
    }

    // relations (again, ignoring overloading)
    if (ctx->EQ()) {
        auto lhs = std::any_cast<Type>(visit(expr[0]));
        auto rhs = std::any_cast<Type>(visit(expr[1]));
        auto t = coerce(lhs, rhs);
        if (t == Type::UNKNOWN) {
            errorLogger.logError(std::format("Cannot get type of expression: {}=={}", expr[0]->getText(), expr[1]->getText()), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
        }
        return Type::BOOL;
    }

    if (ctx->NEQ()) {
        auto lhs = std::any_cast<Type>(visit(expr[0]));
        auto rhs = std::any_cast<Type>(visit(expr[1]));
        auto t = coerce(lhs, rhs);
        if (t == Type::UNKNOWN) {
            errorLogger.logError(std::format("Cannot get type of expression: {}!={}", expr[0]->getText(), expr[1]->getText()), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
        }
        return Type::BOOL;
    }

    if (ctx->LEQ()) {
        auto lhs = std::any_cast<Type>(visit(expr[0]));
        auto rhs = std::any_cast<Type>(visit(expr[1]));
        auto t = coerce(lhs, rhs);
        if (t == Type::UNKNOWN) {
            errorLogger.logError(std::format("Cannot get type of expression: {}<={}", expr[0]->getText(), expr[1]->getText()), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
        }
        return Type::BOOL;
    }

    if (ctx->LT()) {
        auto lhs = std::any_cast<Type>(visit(expr[0]));
        auto rhs = std::any_cast<Type>(visit(expr[1]));
        auto t = coerce(lhs, rhs);
        if (t == Type::UNKNOWN) {
            errorLogger.logError(std::format("Cannot get type of expression: {}<{}", expr[0]->getText(), expr[1]->getText()), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
        }
        return Type::BOOL;
    }

    if (ctx->GT()) {
        auto lhs = std::any_cast<Type>(visit(expr[0]));
        auto rhs = std::any_cast<Type>(visit(expr[1]));
        auto t = coerce(lhs, rhs);
        if (t == Type::UNKNOWN) {
            errorLogger.logError(std::format("Cannot get type of expression: {}>{}", expr[0]->getText(), expr[1]->getText()), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
        }
        return Type::BOOL;
    }

    if (ctx->GEQ()) {
        auto lhs = std::any_cast<Type>(visit(expr[0]));
        auto rhs = std::any_cast<Type>(visit(expr[1]));
        auto t = coerce(lhs, rhs);
        if (t == Type::UNKNOWN) {
            errorLogger.logError(std::format("Cannot get type of expression: {}>={}", expr[0]->getText(), expr[1]->getText()), ctx->getStart()->getLine(), ctx->getStart()->getCharPositionInLine());
        }
        return Type::BOOL;
    }

    // else, (expr)
    if (!ctx->expr().empty()) {
        return visit(expr[0]);
    }

    throw std::runtime_error("Reached what should be unreachable code.");
}