#include "calculator.h"


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