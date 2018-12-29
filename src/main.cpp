#include <iostream>
#include "operations/calculator.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, world!" << std::endl;
    std::cout << "5 + 7 = " 
              << operations::Calculator::add(5, 7) << std::endl;
    return 0;
}
