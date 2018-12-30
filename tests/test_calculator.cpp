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

TEST_F(CalculatorTest, ValidateSubtraction) {
    EXPECT_EQ(operations::Calculator::subs(9, 9), 0);
    EXPECT_EQ(operations::Calculator::subs(9, -9), 18);
    EXPECT_EQ(operations::Calculator::subs(-9, 6), -15);
}

TEST_F(CalculatorTest, ValidateMultiplication) {
    EXPECT_EQ(operations::Calculator::mult(2, 3), 6); 
    EXPECT_EQ(operations::Calculator::mult(-2, 3), -6); 
    EXPECT_EQ(operations::Calculator::mult(-3, -3), 9); 
}

TEST_F(CalculatorTest, ValidateDivision) {
    EXPECT_EQ(operations::Calculator::div(6, 2), 3);
    EXPECT_EQ(operations::Calculator::div(6, -2), -3);
    EXPECT_EQ(operations::Calculator::div(-6, -2), 3);
}

TEST_F(CalculatorTest, ValidateDivisionThrowException) {
    using namespace operations::exceptions;
    try {
        int result = operations::Calculator::div(9, 0);
    } catch(DividedByZeroException exception) {
        //SUCCEED();
        EXPECT_EQ(exception.message, messages::DIVIDED_BY_ZERO_MESSAGE);
    } catch(...) {
        FAIL() << "Expected DividedByZeroException exception.";
    }
}
