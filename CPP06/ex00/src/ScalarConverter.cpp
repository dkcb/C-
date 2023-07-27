#include "ScalarConverter.hpp"

static bool isChar(const std::string& input) {
    return input.size() == 1 && !(input[0] < 58 && input[0] > 47);
}

static bool isInt(const std::string& input) {
    std::stringstream ss(input);
    int value;
    ss >> value;
    return !ss.fail() && ss.eof();
}

static bool isFloat(const std::string& input) {
    std::stringstream ss(input.substr(0, input.size() - 1));
    float value;
    ss >> value;
    return !ss.fail() && ss.eof() && input.back() == 'f';
}

static bool isDouble(const std::string& input) {
    std::stringstream ss(input);
    double value;
    ss >> value;
    return !ss.fail() && ss.eof();
}

void ScalarConverter::convert(const std::string& input) {
    char ch;
    int integer;
    float flt;
    double dbl;
    std::stringstream ss(input);

    if (input == "nanf" || input == "-inff" || input == "+inff") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << input << std::endl;
        std::cout << "double: " << input.substr(0, input.size()-1) << std::endl;
        return ;
    }

    if (isChar(input)) {
        ss >> ch;
        std::cout << "Char detected: \n" << ch << std::endl;
        integer = static_cast<int>(ch);
        flt = static_cast<float>(ch);
        dbl = static_cast<double>(ch);
    }
    else if (isInt(input)) {
        ss >> integer;
        std::cout << "Int detected: \n" << integer << std::endl;
        ch = static_cast<char>(integer);
        flt = static_cast<float>(integer);
        dbl = static_cast<double>(integer);
    }
    else if (isFloat(input)) {
        std::stringstream sf(input.substr(0, input.size() - 1));
        sf >> flt;
        std::cout << "Float detected: \n" << flt << std::endl;
        ch = static_cast<char>(flt);
        integer = static_cast<int>(flt);
        dbl = static_cast<double>(flt);
    }
    else if (isDouble(input)) {
        ss >> dbl;
        std::cout << "Double detected: \n" << dbl << std::endl;
        ch = static_cast<char>(dbl);
        integer = static_cast<int>(dbl);
        flt = static_cast<float>(dbl);
    }
    else {
        std::cout << "Invalid input or conversion not supported." << std::endl;
        return;
    }
    if (ch > 32 && ch < 127)
        std::cout << "Char: " << ch << std::endl;
    else
        std::cout << "Char is nonprintable" << std::endl;
    std::cout << "Int: " << integer << std::endl;
    if ((flt - (int)flt))
        std::cout << "Float: " << flt << "f" << std::endl;
    else
        std::cout << "Float: " << flt << ".0f" << std::endl;
    if (dbl - (int) dbl)
        std::cout << "Double: " << dbl << std::endl;
    else
        std::cout << "Double: " << dbl << ".0"<< std::endl;
}

