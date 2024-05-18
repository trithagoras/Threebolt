#include "interpreter.h"
#include <format>

void Interpreter::push_stack(const std::string& shortname) {
    auto stackName = scopeStack.top()->get_longname() + "::" + shortname;
    if (auto stack = this->scopeTable.get_scope(stackName)) {
        scopeStack.push(stack);
    }
    throw std::runtime_error(std::format("Stack with shortname {} (longname {}) either is not in scope or cannot be found.", shortname, stackName));
}

void Interpreter::pop_stack() {
    this->scopeStack.pop();
}