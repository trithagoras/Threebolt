#include <iostream>
#include <antlr4-runtime.h>
#include "threeboltLexer.h"
#include "threeboltParser.h"
#include "scopepopulator.h"
#include "scope.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: threebolt <input-file.3b>" << std::endl;
        return 1;
    }
    auto filePath = argv[1];

    std::ifstream t(filePath);
    std::stringstream buffer;
    buffer << t.rdbuf();
    auto program = buffer.str();
    auto cs = antlr4::ANTLRInputStream(program);

    // setting up
    auto lexer = threeboltLexer(&cs);
    auto tokens = antlr4::CommonTokenStream(&lexer);
    auto parser = threeboltParser(&tokens);
    auto tree = parser.program();

    // initial walk (populating scopes and symbol tables)
    auto visitor = ScopePopulator();
    visitor.visit(tree);
    return 0;
}