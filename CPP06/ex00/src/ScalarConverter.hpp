#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits>

class ScalarConverter {
public:
    static void convert(const std::string& input);
};

std::ostream&	operator<< (std::ostream &out, ScalarConverter const & obj);

#endif