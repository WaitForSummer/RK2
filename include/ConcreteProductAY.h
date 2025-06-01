#include "IProductA.h"
#include <string>

class ConcreteProductAY : public IProductA
{
public:
    ConcreteProductAY();

    std::string init() const override;
    std::string performTask() const override;
};
