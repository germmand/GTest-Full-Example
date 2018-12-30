#include "operations/calculator.h"
#include "gtest/gtest.h"

namespace {

class CalculatorTest : public ::testing::Test {
public:
    CalculatorTest() {}
    ~CalculatorTest() override {}

    void SetUp() override {
    }

    void TearDown() override {
    }
};

} // namespace

TEST_F(CalculatorTest, ValidateAddition) {
    EXPECT_EQ(operations::Calculator::add(5, 4), 9);
    EXPECT_EQ(operations::Calculator::add(-5, 4), -1);
    EXPECT_EQ(operations::Calculator::add(5, 0), 5);
}
