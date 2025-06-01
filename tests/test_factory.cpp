#include <gtest/gtest.h>
#include "ConcreteFactoryX.h"
#include "ConcreteFactoryY.h"

TEST(FactoryTest, FactoryXProducesCorrectProducts) {
    ConcreteFactoryX fx;
    auto a = fx.createProductA();
    auto b = fx.createProductB();

    EXPECT_EQ(a->performTask(), "Task from Product A of Factory X");
    EXPECT_EQ(b->performTask(), "Task from Product B of Factory X");

    delete a;
    delete b;
}

TEST(FactoryTest, FactoryYProducesCorrectProducts) {
    ConcreteFactoryY fy;
    auto a = fy.createProductA();
    auto b = fy.createProductB();

    EXPECT_EQ(a->performTask(), "Task from Product A of Factory Y");
    EXPECT_EQ(b->performTask(), "Task from Product B of Factory Y");

    delete a;
    delete b;
}
