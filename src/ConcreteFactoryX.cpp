#include "ConcreteFactoryX.h"
#include "ConcreteProductAX.h"
#include "ConcreteProductBX.h"

ConcreteFactoryX::ConcreteFactoryX()
{
}

IProductA *ConcreteFactoryX::createConcreteProductA() const
{
    return new ConcreteProductAX();
}

IProductB *ConcreteFactoryX::createConcreteProductB() const
{
    return new ConcreteProductBX();
}
