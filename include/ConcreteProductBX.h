#include "IProductB.h"
#include <string>
class ConcreteProductBX : public IProductB
{
public:
    ConcreteProductBX();

    std::string init() const override;
    std::string performTask() const override;
};
