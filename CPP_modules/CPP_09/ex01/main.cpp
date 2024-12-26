#include <iostream>
#include <sstream>
#include <string>
#include "RPN.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <RPN expression>" << std::endl;
        return 1;
    }

    std::string expression = argv[1];
    RPNCalculator calculator;

    try {
        double result = calculator.evaluate(expression);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}