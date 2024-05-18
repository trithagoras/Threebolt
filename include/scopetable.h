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
    std::shared_ptr<Scope> get_scope(const std::string& name) const {
        return scopes.at(name);
    }

private:
    std::map<std::string, std::shared_ptr<Scope>> scopes;
};