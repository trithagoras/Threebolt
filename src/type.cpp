#include "type.h"

Type coerce(Type p, Type q) {
    if (p == q) {
        return p;
    }
    if (p == Type::INT && q == Type::FLOAT || p == Type::FLOAT && q == Type::INT) {
        return Type::FLOAT;
    }
    return Type::UNKNOWN;
}

Type str_to_type(const std::string& type) {
    if (type == "int") {
        return Type::INT;
    } else if (type == "float") {
        return Type::FLOAT;
    } else if (type == "char") {
        return Type::CHAR;
    } else if (type == "void") {
        return Type::VOID;
    } else if (type == "bool") {
        return Type::BOOL;
    }
    return Type::UNKNOWN;
}

std::string type_to_str(Type type) {
    switch (type) {
        case Type::INT:
            return "int";
        case Type::CHAR:
            return "char";
        case Type::FLOAT:
            return "float";
        case Type::VOID:
            return "void";
        case Type::BOOL:
            return "bool";
        default:
            return "unknown";
    }
}