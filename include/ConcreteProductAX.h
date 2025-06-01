#include "IProductA.h"
#include <string>

class ConcreteProductAX : public IProductA
{
public:
    ConcreteProductAX();

    std::string init() const override;
    std::string performTask() const override;
};
