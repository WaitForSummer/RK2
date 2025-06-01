#include "ConcreteFactoryY.h"
#include "ConcreteProductAY.h"
#include "ConcreteProductBY.h"

ConcreteFactoryY::ConcreteFactoryY()
{
}

IProductA *ConcreteFactoryY::createConcreteProductA() const
{
    return new ConcreteProductAY();
}

IProductB *ConcreteFactoryY::createConcreteProductB() const
{
    return new ConcreteProductBY();
}
