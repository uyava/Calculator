#include "calculator.h"

int first = 0, second = 0, result = 0;
char op = 'y';
std::string inpt = "";

void print_greeting()
{
    std::cout << "Calculator" << std::endl;
    std::cout << "----------\n" << std::endl;
}

void print_warning()
{
    std::cout << "The input is invalid. I cannot proceed further." << std::endl;
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

int ask_for_user_input_with_checks()
{
    std::cout << "Enter the first integer: ";
    std::cin >> inpt;
    if(check_and_cast_integer(inpt, first)!=1) 
    {
        print_warning();
        return 0;
    }
    
    std::cout << "Enter the operator (+,-,*,/): ";
    std::cin >> inpt;
    if(check_and_cast_operator(inpt)!=1)
    {
        print_warning();
        return 0;
    }
    
    std::cout << "Enter the second integer: ";
    std::cin >> inpt;
    if(check_and_cast_integer(inpt, second)!=1)
    {
        print_warning();
        return 0;
    }

    return 1;
}