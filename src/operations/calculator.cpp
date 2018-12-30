#include "operations/calculator.h"

namespace operations {

int Calculator::add(int num1, int num2) {
    return num1 + num2;
}

int Calculator::subs(int num1, int num2) {
    return num1 - num2;
}

int Calculator::mult(int num1, int num2) {
    return num1 * num2;
}

int Calculator::div(int num1, int num2) {
    if(num2 == 0) {
        exceptions::DividedByZeroException exception;
        exception.message = exceptions::messages::DIVIDED_BY_ZERO_MESSAGE;
        throw exception;
    }
    return num1 / num2;
}

} // namespace operations
