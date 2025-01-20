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

    // Additional tests
    //{
    //    RPNCalculator calculator;
    //    std::string expressions[] = {
    //        "8 9 * 9 + 9 + 4 + 1 +", // 95
    //        "9 8 * 4 * 4 / 2 + 9 + 8 + 1 + 6 -", // 86
    //        "1 2 * 2 / 2 + 5 * 6 + 1 3 * + 4 5 * + 8 /", // 5.5
    //        "3 4 + 2 * 7 /", // 2
    //        "5 1 2 + 4 * + 3 -", // 14
    //        "2 3 + 4 5 * -", // -15
    //        "10 2 8 * + 3 -", // 23
    //        "2 3 4 * +", // 14
    //        "5 9 8 + 4 6 * * 7 + *" // 2075
    //    };

    //    for (size_t i = 0; i < sizeof(expressions) / sizeof(expressions[0]); ++i) {
    //       try {
    //            double result = calculator.evaluate(expressions[i]);
    //            std::cout << "Expression: " << expressions[i] << " => Result: " << result << std::endl;
    //        } catch (const std::exception& e) {
    //            std::cerr << "Expression: " << expressions[i] << " => Error: " << e.what() << std::endl;
    //        }
    //    }
    //}

    return 0;
}