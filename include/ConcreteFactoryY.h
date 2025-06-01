#include "IFactory.h"

class ConcreteFactoryY : public IFactory
{
public:
    ConcreteFactoryY();

    IProductA* createConcreteProductA() const override;
    IProductB* createConcreteProductB() const override;
};

