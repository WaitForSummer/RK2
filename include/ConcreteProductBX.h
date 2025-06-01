#include "IProductB.h"

class ConcreteProductBX : public IProductB
{
public:
    ConcreteProductBX();

    void init() const override;
    void performTask() const override;
};
