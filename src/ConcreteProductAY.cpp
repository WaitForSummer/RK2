#include "ConcreteProductAY.h"

#include <iostream>

ConcreteProductAY::ConcreteProductAY()
{
}

std::string ConcreteProductAY::init() const
{
    return "Initializing ConcreteProductAY";
}

std::string ConcreteProductAY::performTask() const
{
    return "Task from Product A of Factory Y";
}
