#include "IProductA.h"
#include "IFactory.h"
#include "ConcreteFactoryX.h"
#include "ConcreteFactoryY.h"

int main()
{
    // Create factory based on some specific condition eg - OS
    IFactory *factory;
#ifdef OSX
    factory = new ConcreteFactoryX();
#else
    factory = new ConcreteFactoryY();
#endif

    // Products will now be made specifc to that OS
    IProductA *productA = factory->createConcreteProductA();
    productA->init();
    productA->performTask();

    IProductB *productB = factory->createConcreteProductB();
    productB->init();
    productB->performTask();

    return 0;
}
