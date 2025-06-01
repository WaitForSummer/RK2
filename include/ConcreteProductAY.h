#include "IProductA.h"

class ConcreteProductAY : public IProductA
{
public:
    ConcreteProductAY();

    void init() const override;
    void performTask() const override;
};
