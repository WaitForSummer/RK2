#include "ConcreteProductAX.h"

#include <iostream>

ConcreteProductAX::ConcreteProductAX()
{
}

std::string ConcreteProductAX::init() const
{
    return "Initializing ConcreteProductAX";
}

std::string ConcreteProductAX::performTask() const
{
    return "Task from Product A of Factory X";
}
