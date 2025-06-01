#pragma once

#include "IProductA.h"
#include "IProductB.h"

class IFactory
{
public:
    virtual IProductA* createConcreteProductA() const = 0;
    virtual IProductB* createConcreteProductB() const = 0;
};
