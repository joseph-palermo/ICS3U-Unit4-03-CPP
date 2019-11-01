// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program uses a for do while loop to get the factorial of integers

#include <iostream>
#include <cmath>


int main() {
    // This function uses a for do while loop to get the factorial of integers

    // variables
    int counter;
    int integer;
    int square;

    // input
    std::cout << "" << std::endl;
    std::cout << "Enter an integer: ";
    std::cin >> integer;
    std::cout << "" << std::endl;

    // process and output
    for (counter = 0; counter < integer + 1; counter++) {
        square = pow(counter, 2);
        std::cout << counter << "² = " << square << "" <<
        std::endl;
    }
}
