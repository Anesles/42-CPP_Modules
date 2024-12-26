#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <stdexcept>
#include <sstream>
#include <iostream>

class RPNCalculator {
public:
    double evaluate(const std::string& expression);

private:
    bool isOperator(const std::string& token) const;
    double applyOperator(const std::string& op, double a, double b) const;
};

#endif // RPN_HPP