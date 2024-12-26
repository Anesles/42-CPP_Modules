#include "RPN.hpp"

double RPNCalculator::evaluate(const std::string& expression) {
    std::istringstream iss(expression);
    std::stack<double> stack;
    std::string token;

    while (iss >> token) {
        if (isOperator(token)) {
            if (stack.size() < 2) {
                throw std::runtime_error("Invalid expression");
            }
            double b = stack.top(); stack.pop();
            double a = stack.top(); stack.pop();
            stack.push(applyOperator(token, a, b));
        } else {
            std::istringstream tokenStream(token);
            double value;
            tokenStream >> value;
            if (tokenStream.fail()) {
                throw std::runtime_error("Invalid token: " + token);
            }
            stack.push(value);
        }
    }

    if (stack.size() != 1) {
        throw std::runtime_error("Invalid expression");
    }

    return stack.top();
}

bool RPNCalculator::isOperator(const std::string& token) const {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

double RPNCalculator::applyOperator(const std::string& op, double a, double b) const {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") return a / b;
    throw std::runtime_error("Unknown operator");
}