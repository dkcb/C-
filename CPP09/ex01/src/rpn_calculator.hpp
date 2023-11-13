#ifndef RPN_CALCULATOR_HPP
#define RPN_CALCULATOR_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <stdexcept>
#include <cstring>

class RPNCalculator {
public:
    explicit RPNCalculator(const std::string& expression);

    double calculate();

private:
    std::stack<double> operandStack;

    void processToken(const std::string& token);
};

#endif // RPN_CALCULATOR_HPP
