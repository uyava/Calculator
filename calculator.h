#pragma once

#include <iostream>

extern int first, second, result;
extern char op;

void ask_for_user_input();
int check_user_operator(char op);
int calculate(int first, int second, char op);