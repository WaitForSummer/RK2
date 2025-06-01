#include "IFactory.h"

class ConcreteFactoryX : public IFactory
{
public:
    ConcreteFactoryX();

    IProductA* createConcreteProductA() const override;
    IProductB* createConcreteProductB() const override;
};

