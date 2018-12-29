#ifndef OPERATIONS_CALCULATOR_H
#define OPERATIONS_CALCULATOR_H

#include <string>

namespace operations {
namespace exceptions {
    
struct DividedByZeroException {
    std::string message;    
};
    
} // namespace exceptions

class Calculator {
public:
    Calculator() {}
    ~Calculator() {}

    static int add(int num1, int num2);
    static int subs(int num1, int num2);
    static int mult(int num1, int num2);
    static int div(int num1, int num2);
};

} // namespace operations

#endif
