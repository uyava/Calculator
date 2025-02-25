#include <iostream>

int main()
{

    std::cout << "Calculator for adding integers" << std::endl;
    std::cout << "------------------------------\n" << std::endl;
    int a = 0, b = 0, c = 0;
    std::cout << "Enter the first integer: ";
    std::cin >> a;
    std::cout << "Enter the second integer: ";
    std::cin >> b;
    c = a + b;
    std::cout << a << " + " << b << " = " << c << std::endl;

    return 0;
}