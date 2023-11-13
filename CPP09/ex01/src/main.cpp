#include "rpn_calculator.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        // Display an error message if the number of command-line arguments is incorrect.
        std::cerr << "Usage: " << argv[0] << " <inverted_polish_expression>\n";
        return 1; // Return error code 1.
    }

    // Initialize the RPN calculator with the provided expression.
    RPNCalculator calculator(argv[1]);

    try {
        // Calculate and output the result.
        double result = calculator.calculate();
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        // Display an error message if an exception occurs during calculation.
        std::cerr << "Error: " << e.what() << std::endl;
        return 2; // Return error code 2.
    }

    return 0; // Return success code.
}
