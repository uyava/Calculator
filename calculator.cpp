#include <iostream>

int main()
{

    // std::cout << "Calculator for adding integers" << std::endl;
    // std::cout << "------------------------------\n" << std::endl;
    // int a = 0, b = 0, c = 0;
    // std::cout << "Enter the first integer: ";
    // std::cin >> a;
    // std::cout << "Enter the second integer: ";
    // std::cin >> b;
    // c = a + b;
    // std::cout << a << " + " << b << " = " << c << std::endl;

    std::cout << "Calculator for dividing integers" << std::endl;
    std::cout << "------------------------------\n" << std::endl;
    int divident = 0, divisor = 0, quatient = 0, remainder = 0;
    std::cout << "Enter the first integer: ";
    std::cin >> divident;
    std::cout << "Enter the second integer: ";
    std::cin >> divisor;
    quatient = divident / divisor;
    remainder = divident % divisor;
    std::cout << divident << " / " << divisor << " = " << quatient 
    << " (remainder " << remainder << " )" << std::endl;


    return 0;
}