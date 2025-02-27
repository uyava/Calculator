#include "calculator.h"

int first = 0, second = 0, result = 0;
char op = 'y';
std::string inpt = "";

void print_greeting()
{
    std::cout << "Calculator" << std::endl;
    std::cout << "----------\n" << std::endl;
}

void ask_for_user_input()
{
    std::cout << "Enter the first integer: ";
    std::cin >> first;
    std::cout << "Enter the operator (+,-,*,/): ";
    std::cin >> op;
    std::cout << "Enter the second integer: ";
    std::cin >> second;
}

int calculate(int first, int second, char op)
{
    if (op == '+')
    {
        result = first + second;
    }
    else if (op == '-')
    {
        result = first - second;
    }
    else if (op == '*')
    {
        result = first * second;
    }
    else if (op == '/')
    {
        result = first / second;
    }
    return result;
}

int check_user_operator(char op)
{
    int good = 1;
    if(op != '+' && op != '-' && op != '*' && op != '/') good = 0;
    return good;
}

int check_and_cast_operator(std::string inpt)
{
    if(inpt.length()!=1)
    {
        return 0;
    }
    if(op != '+' && op != '-' && op != '*' && op != '/')
    {
        return 0;
    }
    op = inpt[0];
    return 1;
}

int check_and_cast_integer(std::string inpt, int integer)
{
    char length = inpt.length();
    if(inpt[0]=='-')
    {
        for(int i = 1; i<length; i++)
        {
            if(!isdigit(inpt[i]))return 0;
        }
    }
    else
    {
        for(int i = 0; i<length; i++)
        {
            if(!isdigit(inpt[i]))return 0;
        }
    }
    integer = std::stoi(inpt);
    return 1;
}