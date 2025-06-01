#pragma once

class IProductA
{
public:
    virtual void init() const = 0;
    virtual void performTask() const = 0;
};
