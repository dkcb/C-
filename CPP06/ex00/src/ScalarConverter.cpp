#include "ScalarConverter.hpp"

static bool isChar(const std::string& input) {
    return input.size() == 3 && input.front() == '\'' && input.back() == '\'';
}

static bool isInt(const std::string& input) {
    std::stringstream ss(input);
    int value;
    ss >> value;
    return !ss.fail() && ss.eof();
}

static bool isFloat(const std::string& input) {
    std::stringstream ss(input);
    float value;
    ss >> value;
    return !ss.fail() && ss.eof();
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

    if (isChar(input)) {
        ss >> ch;
        std::cout << "Char: " << ch << std::endl;
        integer = static_cast<int>(ch);
        flt = static_cast<float>(ch);
        dbl = static_cast<double>(ch);
    }
    else if (isInt(input)) {
        ss >> integer;
        std::cout << "Int: " << integer << std::endl;
        ch = static_cast<char>(integer);
        flt = static_cast<float>(integer);
        dbl = static_cast<double>(integer);
    }
    else if (isFloat(input)) {
        ss >> flt;
        std::cout << "Float: " << flt << std::endl;
        ch = static_cast<char>(flt);
        integer = static_cast<int>(flt);
        dbl = static_cast<double>(flt);
    }
    else if (isDouble(input)) {
        ss >> dbl;
        std::cout << "Double: " << dbl << std::endl;
        ch = static_cast<char>(dbl);
        integer = static_cast<int>(dbl);
        flt = static_cast<float>(dbl);
    }
    else {
        std::cout << "Invalid input or conversion not supported." << std::endl;
        return;
    }

    std::cout << "Char: " << ch << std::endl;
    std::cout << "Int: " << integer << std::endl;
    std::cout << "Float: " << flt << std::endl;
    std::cout << "Double: " << dbl << std::endl;
}

