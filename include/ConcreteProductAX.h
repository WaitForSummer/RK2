#include "IProductA.h"

class ConcreteProductAX : public IProductA
{
public:
    ConcreteProductAX();

    void init() const override;
    void performTask() const override;
};
