#include <iostream>
#include <antlr4-runtime.h>
#include "threeboltLexer.h"
#include "threeboltParser.h"
#include "scopepopulator.h"
#include "scope.h"
#include "errorlogger.h"
#include "typechecker.h"

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

    // for (auto& [name, scope] : scopeTable.get_scopes()) {
    //     std::cout << name << std::endl;
    // }

    // std::cout << "Printing all known symbols at scope global::complex_scope(int)::2::0" << std::endl;

    // auto& scope = scopeTable.get_scopes().at("global::complex_scope(int)::2::0");
    // for (auto& [name, symbol] : scope->get_all_symbols_in_scope()) {
    //     std::cout << name << std::endl;
    // }

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

    return 0;
}