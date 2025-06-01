#pragma once
#include <string>

class IProductA
{
public:
    virtual std::string init() const = 0;
    virtual std::string performTask() const = 0;
};
