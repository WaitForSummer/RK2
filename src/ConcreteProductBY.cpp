#include "ConcreteProductBY.h"

#include <iostream>

ConcreteProductBY::ConcreteProductBY()
{
}

std::string ConcreteProductBY::init() const
{
    return "Initializing ConcreteProductBY";
}

std::string ConcreteProductBY::performTask() const
{
    return "Task from Product B of Factory Y";
}
