#pragma once

#include <string>
#include <vector>
#include <iostream>

struct Error {
    std::string message;
    int line;
    int column;

    Error(const std::string& message, int line, int column) : message(message), line(line), column(column) {}
};

// TODO: have warning system
class ErrorLogger {
public:
    void logError(const std::string& message, int line, int column) {
        errors.emplace_back(message, line, column);
    }

    void printErrors() const {
        for (const auto& error : errors) {
            std::cerr << "Error at line " << error.line << ", column " << error.column << ": " << error.message << std::endl;
        }
    }

    bool hasErrors() const {
        return !errors.empty();
    }

private:
    std::vector<Error> errors;
    // std::vector<Error> warnings;
};