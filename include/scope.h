#pragma once
#include <map>
#include "symbol.h"
#include <memory>
#include <vector>

/// @brief A scope with a nullptr parent is inferred to be the global scope.
class Scope {
private:
    Scope* parent;
    std::map<std::string, std::shared_ptr<Symbol>> symbolTable;

    /// @brief longname is how the identifiers belonging to this scope are stored in the symbolTable. .e.g. global_main referes to the main function.
    std::string longname;

public:
    /// @brief Scope count helps construct the longname of the scope, and subsequently, the longname of each symbol.
    int scopeCount;

    Scope(std::string name) : Scope(name, nullptr) {};
    Scope(std::string name, Scope* parent);

    /// @brief Finds if this symbol is already declared within this scope or recursively within any parent scope.
    /// @param id 
    /// @return nullptr if the symbol is not found, else the corresponding Symbol
    std::shared_ptr<Symbol> find_symbol(const std::string& id) const;

    /// @brief Adds the symbol to this scope's symbol table. If it already exists, this method does nothing.
    /// This method automatically prefixes symbol IDs with this symbols longname s.t. we can efficiently accomplish "symbol table per scope".
    /// @param symbol 
    /// @return False if the symbol already exists in the symbol table.
    bool add_symbol(std::shared_ptr<Symbol> symbol);
    const std::string& get_longname() {
        return this->longname;
    }
    Scope* get_parent() const {
        return parent;
    }
};