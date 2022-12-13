// Copyright (c) 2022 Kent Gatera All rights reserved.
//
// Created by: Kent Gatera
// Created on: Dec. 10, 2022
// This program rounds numbers to a chosen point.

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

// Defining the rounding function.
void roundDec(float &decimalNum, float roundNum) {
    decimalNum *= pow(10, roundNum);
    decimalNum += 0.5;
    decimalNum = static_cast<int>(decimalNum);
    decimalNum = decimalNum / pow(10, roundNum);
}

int main() {
    std::string userDecimalStr;
    float userDecimal;
    std::string userRoundStr;
    int userRound;

    // Getting input.
    std::cout << "What decimal do you want to round?: ";
    std::cin >> userDecimal;
    std::cout << "What decimal place do you want to round it to?: ";
    std::cin >> userRound;
    roundDec(userDecimal, userRound);
    // Error checking
    try {
        userDecimal = std::stof(userDecimalStr);
        userRound = std::stoi(userRoundStr);
        // Rounding visually the decimal so even
        // if there were no decimal places, you can see how many.
        std::cout <<userDecimal << " rounded was to " <<
        userRound << " decimal places.";
    } catch(std::invalid_argument) {
        std::cout << "\nInvalid input.";
    }
}
