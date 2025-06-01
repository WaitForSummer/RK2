#include "IProductB.h"
#include <string>
class ConcreteProductBY : public IProductB
{
public:
    ConcreteProductBY();

    std::string init() const override;
    std::string performTask() const override;
};
