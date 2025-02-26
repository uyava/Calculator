#include <iostream>

int main()
{
    std::cout << "Calculator" << std::endl;
    std::cout << "----------\n" << std::endl;
    int first = 0, second = 0, result = 0;
    char calc;

    std::cout << "Enter the first integer: ";
    std::cin >> first;
    std::cout << "Enter the operator (+,-,*,/): ";
    std::cin >> calc;
    std::cout << "Enter the second integer: ";
    std::cin >> second;

    if (calc == '+')
    {
        result = first + second;
    }
    else if (calc == '-')
    {
        result = first - second;
    }
    else if (calc == '*')
    {
        result = first * second;
    }
    else if (calc == '/')
    {
        result = first / second;
    }

    std::cout << first << " " << calc << " " << second <<  " = " << result << std::endl;


    return 0;
}