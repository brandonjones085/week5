#include "menu.hpp"

#include <iostream>

int menu()
{
    int choice;

    std::cout << "\nPlease choose one of the three functions\n"
              << std::endl;
    std::cout << "Press 1 for function number 1\n";
    std::cout << "Press 2 for function number 2\n";
    std::cout << "Press 3 for function number 3\n";
    std::cout << "Press 4 to exit\n";
    std::cin >> choice;

    return choice;
}