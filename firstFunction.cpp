#include "firstFunction.hpp"

#include <iostream>
#include <string>

void firstFunction(const std::string &x)
{
    size_t num = x.size();

    if (num == 1)
    {
        std::cout << x << std::endl;
    }
    else
    {
        std::cout << x[num - 1];
        firstFunction(x.substr(0, num - 1));
    }
}
