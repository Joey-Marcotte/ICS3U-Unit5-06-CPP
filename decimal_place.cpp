// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: November 2019
// This program shows functions
// with user input

#include <cstdlib>
#include <string>
#include <iostream>
#include <cmath>


float DecimalPlace(float &number, int decimal) {
    // This program rounds a number
    number = number*pow(10, decimal) + 0.5;
    number = int(number);
    number = float(number);
    number = number/(pow(10, decimal));
}


int main() {
    // calls other functions
    std::string numberFromUser;
    float number;
    std::string decimalFromUser;
    int decimal;

    while (true) {
        std::cout << "Enter the number you would like to round: ";
        std::cin >> numberFromUser;

        std::cout << "Enter the decimals you would like to have: ";
        std::cin >> decimalFromUser;

        try {
            number = std::stof(numberFromUser);
            decimal = std::stoi(decimalFromUser);

            DecimalPlace(number, decimal);

            std::cout << "" << number << std::endl;
            break;
        } catch (std::invalid_argument) {
            std::cout << "Not a valid number inputted" << std::endl;
            std::cout << "" << std::endl;
        }
    }
}
