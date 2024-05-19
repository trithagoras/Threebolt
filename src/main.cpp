#include <iostream>
#include <antlr4-runtime.h>
#include "threeboltLexer.h"
#include "threeboltParser.h"
#include "scopepopulator.h"
#include "scope.h"
#include "errorlogger.h"
#include "typechecker.h"
#include "interpreter.h"
#include <set>
#include <format>

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
    std::cout << "Starting symbol table population." << std::endl;
    auto scopePopulator = ScopePopulator(errorLogger, scopeTable);
    scopePopulator.visit(tree);
    std::cout << "Symbol table population complete." << std::endl;

    // print errors relating to symbols and scopes
    if (errorLogger.hasErrors()) {
        errorLogger.printErrors();
        return 1;
    }

    // second walk (type checking)
    std::cout << "Starting type checking." << std::endl;
    auto typeChecker = TypeChecker(errorLogger, scopeTable);
    typeChecker.visit(tree);
    std::cout << "Type checking complete." << std::endl;

    // check there are absolutely no unknown types at this point
    std::set<Symbol*> symbols;
    for (auto& [_, scope] : scopeTable.get_scopes()) {
        for (auto& [_, symbol] : scope->get_all_symbols_in_scope()) {
            symbols.insert(symbol.get());
        }
    }
    for (auto symbol : symbols) {
        if (symbol->type == Type::UNKNOWN) {
            auto [line, col] = symbol->get_declr_pos();
            errorLogger.logError(std::format("Symbol {} (first declared line {}, column {}) has an unknown type. This indicates other type deduction errors and this message should go away when all other type errors are resolved.", symbol->ID, line, col));
        }
    }

    // print errors relating to type checking
    if (errorLogger.hasErrors()) {
        errorLogger.printErrors();
        return 1;
    }

    // code generation / interpretation
    std::cout << "Starting interpretation." << std::endl;
    auto interpreter = Interpreter(errorLogger, scopeTable);
    interpreter.visit(tree);
    std::cout << "Interpretation complete." << std::endl;

    return 0;
}