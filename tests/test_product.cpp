#include <gtest/gtest.h>
#include "ConcreteProductAX.h"
#include "ConcreteProductAY.h"
#include "ConcreteProductBX.h"
#include "ConcreteProductBY.h"

TEST(ProductATest, AXReturnsExpectedString) {
    ConcreteProductAX ax;
    EXPECT_EQ(ax.performTask(), "Task from Product A of Factory X");
}

TEST(ProductATest, AYReturnsExpectedString) {
    ConcreteProductAY ay;
    EXPECT_EQ(ay.performTask(), "Task from Product A of Factory Y");
}
