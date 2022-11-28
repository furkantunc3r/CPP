#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <limits>
#include <climits>

bool isChar(const char *s)
{
    if (strlen(s) == 1 && ((s[0] > 31 && s[0] < 48) || (s[0] > 57 && s[0] < 127)))
        return 1;
    return 0;
}

bool isInt(const char *s)
{
    char *p;
    long converted = strtol(s, &p, 10);
    if (*p || (converted > std::numeric_limits<int>::max() || converted < std::numeric_limits<int>::min()))
        return 0;
    return 1;
}

bool isFloat(const char *s)
{
    char* tmp;
    strtod(s, &tmp);
    if (strlen(tmp) > 1 || (tmp[0] != 'f' && strlen(tmp)))
        return 0;
    return 1;
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Invalid argument entry!!" << std::endl;
        return 0;
    }
    if (isChar(av[1]))
    {
        std::cout << "char: " << av[1][0] << std::endl;
        std::cout << "int: " << static_cast<int>(av[1][0]) << std::endl;
        std::cout << "float: " << static_cast<float>(av[1][0]) << ".0" << std::endl;
        std::cout << "double: " << static_cast<double>(av[1][0]) << ".0" <<std::endl;
    }
    else if (isInt(av[1]))
    {
        std::string s1 = av[1];
        long i = atol(av[1]);
        if ((i >= 0 && i < 32) || i > 127 || i < 0)
            std::cout << "char: non displayable" << std::endl;
        else
            std::cout << "char: " << static_cast<char>(i) << std::endl;
        if (i > INT_MAX || i < INT_MIN)
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << i << std::endl;
        if (i == LONG_MAX || i == LONG_MIN)
            std::cout << "float: inff" << std::endl;
        else
            std::cout << "float: " << static_cast<float>(i) << ".0" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
    }
    else if (isFloat(av[1]))
    {
        char *temp;
        float i = strtod(av[1], &temp);
        double j = strtod(av[1], &temp);
        if (((int)i >= 0 && (int)i < 32) || (int)i > 127 || (int)i < 0 || i == std::numeric_limits<float>::infinity() || i != i)
            std::cout << "char: non displayable" << std::endl;
        else
            std::cout << "char: " << static_cast<char>(i) << std::endl;
        if (i > INT_MAX || i < INT_MIN || i != i)
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(i) << std::endl;
        if (i == std::numeric_limits<float>::infinity())
            std::cout << "float: inff" << std::endl;
        else if (i == -std::numeric_limits<float>::infinity())
            std::cout << "float: -inff" << std::endl;
        else if (i != i)
            std::cout << "float: nanf" << std::endl;
        else
            std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
        if (j == std::numeric_limits<double>::infinity())
            std::cout << "double: inf" << std::endl;
        else if (j == -std::numeric_limits<double>::infinity())
            std::cout << "double: -inf" << std::endl;
        else if (j != j)
            std::cout << "double: nan" << std::endl;
        else
            std::cout << "double: " << static_cast<double>(j) << ".0" << std::endl;
    }
    return 0;
}