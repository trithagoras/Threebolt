#include "errorlogger.h"

void ErrorLogger::logError(const std::string& message, int line, int column) {
        errors.emplace_back(message, line, column);
    }

void ErrorLogger::printErrors() const {
    for (const auto& error : errors) {
        std::cerr << "Error at line " << error.line << ", column " << error.column << ": " << error.message << std::endl;
    }
}

bool ErrorLogger::hasErrors() const {
    return !errors.empty();
}