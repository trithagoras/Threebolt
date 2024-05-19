#pragma once
#include <string>
#include "type.h"
#include "threeboltParser.h"


class Symbol {
public:
    std::string ID;
    Type type;

    /// @brief This is nullptr if this symbol is not a variable (i.e. a function type)
    threeboltParser::VariableDeclContext* varCtx;
    /// @brief This is nullptr if this symbol is not a function type (i.e. a variable)
    threeboltParser::FunctionDeclContext* fnCtx;
    threeboltParser::ParameterContext* paramCtx;
    // position in storage?

    Symbol(std::string id, Type type): ID(id), type(type), varCtx(nullptr), fnCtx(nullptr), paramCtx(nullptr){}

    std::pair<int, int> get_declr_pos() const {
        if (varCtx) {
            return std::pair<int, int>(varCtx->getStart()->getLine(), varCtx->getStart()->getCharPositionInLine());
        }
        if (fnCtx) {
            return std::pair<int, int>(fnCtx->getStart()->getLine(), fnCtx->getStart()->getCharPositionInLine());
        }

        return std::pair<int, int>(paramCtx->getStart()->getLine(), paramCtx->getStart()->getCharPositionInLine());
    }
};