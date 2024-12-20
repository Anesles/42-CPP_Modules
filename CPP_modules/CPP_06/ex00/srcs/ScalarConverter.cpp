#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& /*other*/) {} // Suppress unused parameter warning
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& /*other*/) { return *this; } // Suppress unused parameter warning
ScalarConverter::~ScalarConverter() {}

bool ScalarConverter::isChar(const std::string& literal) {
    return literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]);
}

bool ScalarConverter::isInt(const std::string& literal) {
    char* end;
    long value = std::strtol(literal.c_str(), &end, 10);
    return *end == '\0' && value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max();
}

bool ScalarConverter::isFloat(const std::string& literal) {
    char* end;
    std::strtof(literal.c_str(), &end);
    return *end == 'f' && *(end + 1) == '\0';
}

bool ScalarConverter::isDouble(const std::string& literal) {
    char* end;
    std::strtod(literal.c_str(), &end);
    return *end == '\0';
}

void ScalarConverter::convert(const std::string& literal) {
    if (isChar(literal)) {
        char c = literal[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << std::endl;
    } else if (isInt(literal)) {
        std::stringstream ss(literal);
        int i;
        ss >> i;
        if (i < std::numeric_limits<char>::min() || i > std::numeric_limits<char>::max())
            std::cout << "char: impossible" << std::endl;
        else if (std::isprint(static_cast<char>(i)))
            std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    } else if (isFloat(literal)) {
        float f = std::strtof(literal.c_str(), NULL);
        if (f < std::numeric_limits<char>::min() || f > std::numeric_limits<char>::max())
            std::cout << "char: impossible" << std::endl;
        else if (std::isprint(static_cast<char>(f)))
            std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(f) << std::endl;
        std::cout << "float: " << f << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(f) << std::endl;
    } else if (isDouble(literal)) {
        double d = std::strtod(literal.c_str(), NULL);
        if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
            std::cout << "char: impossible" << std::endl;
        else if (std::isprint(static_cast<char>(d)))
            std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(d) << std::endl;
        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    } else {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}