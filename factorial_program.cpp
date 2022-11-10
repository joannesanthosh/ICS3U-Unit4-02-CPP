// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Joanne Santhosh
// Created on: Nov 2022
// This program uses a do...while loop

#include <iostream>

main() {
    // this function uses a while loop
    int positiveInteger;
    int loopCounter = 0;

    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> positiveInteger;

    // process & output
    do {
        std::cout << loopCounter << " time through loop." << std::endl;
        loopCounter = loopCounter + 1;
    } while (loopCounter < positiveInteger);
}