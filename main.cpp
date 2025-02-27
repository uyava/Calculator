#include "calculator.h"


int main()
{
    print_greeting();    
   
    if (ask_for_user_input_with_checks() != 0)
    {
        result = calculate(first, second, op);
        std::cout << first << " " << op << " " << second <<  " = " << result << std::endl;

    } 

    return 0;
}