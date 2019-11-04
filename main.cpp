#include <iostream>
#include "calculator.h"

int main() {
    Calculator calculator;
    std::cout << "5 + 5 = " << calculator.add(5, 5) << std::endl;
    return 0;
}
