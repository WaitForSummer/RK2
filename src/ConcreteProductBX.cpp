#include "ConcreteProductBX.h"

#include <iostream>

ConcreteProductBX::ConcreteProductBX()
{
}

std::string ConcreteProductBX::init() const
{
    return "Initializing ConcreteProductBX";
}

std::string ConcreteProductBX::performTask() const
{
    return "Task from Product B of Factory X";
}
