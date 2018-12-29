#include "operations/calculator.h"

namespace operations {

int Calculator::add(int num1, int num2) {
    return num1 + num2;
}

int subs(int num1, int num2) {
    return num1 - num2;
}

int mult(int num1, int num2) {
    return num1 * num2;
}

int div(int num1, int num2) {
    if(num2 == 0) {
        exceptions::DividedByZeroException exception;
        exception.message = "You can't divide " + std::to_string(num1) + " by zero.";
        throw exception;
    }
    return num1 / num2;
}

} // namespace operations
