/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 12, 2018, 10:18 PM
 */

#include <iostream>

int stringToInt(char* str) {
    int res = 0;
    int sign = 1;
    int i = 0;

    if (*str == '-') {
        sign = -1;
        ++i;
    }

    for (; *(str + i) != '\0'; ++i)
        res = res * 10 + (*(str + i) - '0');

    if (sign == -1)
        return sign * res;
    else return res;
}

int main(int argc, char** argv) {

    char str[] = "-58976";
    std::cout << stringToInt(str) << '\n';

    return 0;
}

