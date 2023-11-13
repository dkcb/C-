#include "rpn_calculator.hpp"

RPNCalculator::RPNCalculator(const std::string& expression) {
    std::istringstream iss(expression);
    std::string token;

    // Process each token in the expression.
    while (iss >> token) {
        processToken(token);
    }
}

void RPNCalculator::processToken(const std::string& token) {
    if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
        // If the token is a number, push it onto the operand stack.
        operandStack.push(std::stod(token));
    } else if (token.size() == 1 && strchr("+-*/", token[0])) {
        // If the token is an operator, pop operands, perform the operation, and push the result back.
        if (operandStack.size() < 2) {
            throw std::runtime_error("Not enough operands for operator: " + token);
        }

        double operand2 = operandStack.top();
        operandStack.pop();

        double operand1 = operandStack.top();
        operandStack.pop();

        switch (token[0]) {
            case '+':
                operandStack.push(operand1 + operand2);
                break;
            case '-':
                operandStack.push(operand1 - operand2);
                break;
            case '*':
                operandStack.push(operand1 * operand2);
                break;
            case '/':
                if (operand2 == 0) {
                    throw std::runtime_error("Division by zero");
                }
                operandStack.push(operand1 / operand2);
                break;
        }
    } else {
        // Invalid token.
        throw std::runtime_error("Invalid token: " + token);
    }
}

double RPNCalculator::calculate() {
    // The final result should be on the top of the stack.
    if (operandStack.size() != 1) {
        throw std::runtime_error("Invalid expression");
    }

    return operandStack.top();
}
