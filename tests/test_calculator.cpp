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
    // Arrange
    int a = 5, b = 4;
    int expected = a + b;

    // Act
    int result = operations::Calculator::add(a, b);

    // Assert
    EXPECT_EQ(result, expected);
}

TEST_F(CalculatorTest, ValidateSubtraction) {
    // Arrange
    int a = 9, b = -6;
    int expected = a - b;

    // Act
    int result = operations::Calculator::subs(a, b);
    
    // Assert
    EXPECT_EQ(result, expected);
}

TEST_F(CalculatorTest, ValidateMultiplication) {
    // Arrange
    int a = 2, b = 3;
    int expected = a * b;

    // Act
    int result = operations::Calculator::mult(a, b);

    // Assert
    EXPECT_EQ(result, expected); 
}

TEST_F(CalculatorTest, ValidateDivision) {
    // Arrange
    int a = 6, b = 2;
    int expected = a / b;

    // Act
    int result = operations::Calculator::div(a, b);
    
    // Assert
    EXPECT_EQ(result, expected);
}

TEST_F(CalculatorTest, ValidateDivisionThrowException) {
    using namespace operations::exceptions;
    try {
        // Arrange
        int a = 9, b = 0;

        // Act
        int result = operations::Calculator::div(a, b);
    } catch(DividedByZeroException exception) {
        // Assert
        EXPECT_EQ(exception.message, messages::DIVIDED_BY_ZERO_MESSAGE);
    } catch(...) {
        FAIL() << "Expected DividedByZeroException exception.";
    }
    FAIL() << "Expected DividedByZeroException exception.";
}
