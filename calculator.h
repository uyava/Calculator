#pragma once

#include <iostream>
#include <string>
#include <cctype>

extern int first, second, result;
extern char op;
extern std::string inpt;

void print_greeting();
void print_warning();
void ask_for_user_input();
int check_user_operator(char op);
int calculate(int first, int second, char op);
int check_and_cast_operator(std::string inpt);
int check_and_cast_integer(std::string inpt);
int ask_for_user_input_with_checks();