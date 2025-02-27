#pragma once

#include <iostream>
#include <string>

extern int first, second, result;
extern char op;

void print_greeting();
void ask_for_user_input();
int check_user_operator(char op);
int calculate(int first, int second, char op);
int check_and_cast_operator(std::string inpt);