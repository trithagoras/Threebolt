#pragma once
#include <string>
#include "type.h"



class Symbol {
public:
    std::string ID;
    Type type;
    // position in storage?

    Symbol(std::string id, Type type): ID(id), type(type){}
};