#pragma once

#include "threeboltBaseVisitor.h"

class ExampleVisitor : public threeboltBaseVisitor {
    std::any visitProgram(threeboltParser::ProgramContext *ctx) override;
    std::any visitFunctionDecl(threeboltParser::FunctionDeclContext *ctx) override;
};