#include <iostream>
#include <antlr4-runtime.h>
#include "threeboltLexer.h"
#include "threeboltParser.h"
#include "scopepopulator.h"
#include "scope.h"
#include "errorlogger.h"

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

    // initial walk (populating scopes and symbol tables)
    auto visitor = ScopePopulator(errorLogger, scopeTable);
    visitor.visit(tree);

    std::cout << "Symbol Table population complete." << std::endl;

    for (auto& [name, scope] : scopeTable.get_scopes()) {
        std::cout << name << std::endl;
    }

    std::cout << "Printing all known symbols at scope global::complex_scope(int)::2::0" << std::endl;

    auto& scope = scopeTable.get_scopes().at("global::complex_scope(int)::2::0");
    for (auto& [name, symbol] : scope->get_all_symbols_in_scope()) {
        std::cout << name << std::endl;
    }

    // print errors relating to symbols and scopes
    if (errorLogger.hasErrors()) {
        errorLogger.printErrors();
        return 1;
    }


    return 0;
}