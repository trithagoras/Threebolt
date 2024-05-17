#include "examplevisitor.h"
#include <iostream>

std::any ExampleVisitor::visitProgram(threeboltParser::ProgramContext *ctx) {
    std::cout << "Visiting Program" << std::endl;
    return ctx;
}

std::any ExampleVisitor::visitFunctionDecl(threeboltParser::FunctionDeclContext *ctx) {
    std::cout << "Visiting FunctionDeclr " << ctx->ID()->toString() << std::endl;
    return ctx;
}