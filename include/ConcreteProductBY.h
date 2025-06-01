#include "IProductB.h"

class ConcreteProductBY : public IProductB
{
public:
    ConcreteProductBY();

    void init() const override;
    void performTask() const override;
};
