#pragma once
#include <memory>
#include <map>
#include "scope.h"

class ScopeTable {
public:
    void add_scope(std::shared_ptr<Scope> scope) {
        scopes.emplace(scope->get_longname(), scope);
    }
    const std::map<std::string, std::shared_ptr<Scope>>& get_scopes() const {
        return scopes;
    }

private:
    std::map<std::string, std::shared_ptr<Scope>> scopes;
};