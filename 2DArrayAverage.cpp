// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Jun 2022
// This program finds the average of a 2D array

#include <iostream>
#include <random>
#include <array>

template<int rows, int columns>
float AverageOfNumbers(int (&passed2DList)[rows][columns]) {
    // this function calculates the average
    float average;
    float total = 0.00;

    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            total += passed2DList[rowElement][columnElement];
        }
    }
    average = total / (rows * columns);

    return average;
}


main() {
    // this function generates the values

    int number;
    const int rows = 4;
    const int columns = 5;
    int a2DArray[rows][columns];
    float answer;

    for (int rowElement = 0; rowElement < rows; rowElement++) {
        std::cout << std::endl;
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            std::random_device rseed;
            std::mt19937 rgen(rseed());  // mersenne_twister
            std::uniform_int_distribution<int> idist(1, 50);  // [0, 9]
            number = idist(rgen);
            a2DArray[rowElement][columnElement] = number;
            std::cout << number << ", ";
        }
    }
    answer = AverageOfNumbers(a2DArray);
    std::cout << "" << std::endl;
    std::cout << "The average is: " << answer << std::endl;
}
