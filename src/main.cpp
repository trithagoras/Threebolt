#include <iostream>
#include <antlr4-runtime.h>
#include "threeboltLexer.h"
#include "threeboltParser.h"
#include "scopepopulator.h"
#include "scope.h"
#include "errorlogger.h"
#include "typechecker.h"
#include <set>

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

    ErrorLogger errorLogger;
    ScopeTable scopeTable;

    std::cout << "Starting symbol table population." << std::endl;

    // initial walk (populating scopes and symbol tables)
    auto scopePopulator = ScopePopulator(errorLogger, scopeTable);
    scopePopulator.visit(tree);

    std::cout << "Symbol table population complete." << std::endl;

    // print errors relating to symbols and scopes
    if (errorLogger.hasErrors()) {
        errorLogger.printErrors();
        return 1;
    }

    std::cout << "Starting type checking." << std::endl;

    // second walk (type checking)
    auto typeChecker = TypeChecker(errorLogger, scopeTable);
    typeChecker.visit(tree);

    std::cout << "Type checking complete." << std::endl;

    // print errors relating to type checking
    if (errorLogger.hasErrors()) {
        errorLogger.printErrors();
        return 1;
    }

    // code generation

    return 0;
}