
#include "menu.hpp"
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

int main()
{
    int num = menu();

    if (num == 1 || num == 2 || num == 3)
    {

        if (num == 1)
        {
            std::string input = " ";

            std::cout << "Function num 1\n";
            std::cout << "Please enter a string to reverse\n";
            std::getline(std::cin, input);
            std::cin.ignore();
            firstFunction(input);

            std::cout << std::endl;
        }
        else if (num == 2)
        {
            std::cout << "Function num 2\n";
            num = menu();
        }
        else if (num == 3)
        {
            std::cout << "Function num 3\n";
            num = menu();
        }
    }

    std::cout << "\n\nGoodbye\n\n";

    return 0;
}