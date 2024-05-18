#pragma once
#include <string>

enum Type {
    UNKNOWN,
    INT,
    CHAR,
    FN,
    FLOAT,
    BOOL,
    VOID,
    // ...
};

Type str_to_type(const std::string& type);
std::string type_to_str(Type type);
Type coerce(Type p, Type q);