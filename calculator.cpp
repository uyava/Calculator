#include <iostream>

int first = 0, second = 0, result = 0;
char op = 'y';

void ask_for_user_input();
int check_user_operator(char op);
int calculate(int first, int second, char op);

int main()
{
    std::cout << "Calculator" << std::endl;
    std::cout << "----------\n" << std::endl;
    
    ask_for_user_input();
    int good = check_user_operator(op);
    if (good == 1)
    {
        result = calculate(first, second, op); 
        std::cout << first << " " << op << " " << second <<  " = " << result << std::endl;
    }
    else 
    {
        std::cout << "The entered operator is not valid" << std::endl;
    }
    


    return 0;
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