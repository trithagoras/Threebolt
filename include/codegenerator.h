#pragma once
// #include "threeboltBaseVisitor.h"
// #include <stack>
// #include "scope.h"
// #include "errorlogger.h"
// #include "scopetable.h"

// class CodeGenerator : public threeboltBaseVisitor {
//     std::stack<std::shared_ptr<Scope>> scopeStack;
//     ErrorLogger& errorLogger;
//     ScopeTable& scopeTable;

// public:
//     /// @brief Enters into the stack that matches the name "shortname". It must be accessible from the current stack.
//     /// @param shortname e.g. sum(float,float), main()::1::0, etc.
//     void push_stack(const std::string& shortname);
//     void pop_stack();
// };