#include <iostream>
#include <antlr4-runtime.h>
#include "threeboltLexer.h"
#include "threeboltParser.h"
#include "examplevisitor.h"

int main() {
    // TODO: obviously change this
    std::ifstream t("/home/corey/code/cpp/threebolt/examples/simple.3b");
    std::stringstream buffer;
    buffer << t.rdbuf();
    auto program = buffer.str();
    auto cs = antlr4::ANTLRInputStream(program);

    // setting up
    auto lexer = threeboltLexer(&cs);
    auto tokens = antlr4::CommonTokenStream(&lexer);
    auto parser = threeboltParser(&tokens);
    auto tree = parser.program();

    // initial walk (populating scopes)


    // subsequent walk
    auto visitor = ExampleVisitor();
    visitor.visit(tree);
    return 0;
}