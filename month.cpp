// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program will tell you what month your number represents

#include <iostream>


int main() {
    // this function tells you what month your number represents

    int monthNumber;

    // Input
    std::cout << "Enter the number of a month(ex: 3 for March): ";
    std::cin >> monthNumber;

    // Process
    if (monthNumber == 1) {
        std::cout << "January";
    } else if (monthNumber == 2) {
        std::cout << "February";
    } else if (monthNumber == 3) {
        std::cout << "March";
    } else if (monthNumber == 4) {
        std::cout << "April";
    } else if (monthNumber == 5) {
        std::cout << "May";
    } else if (monthNumber == 6) {
        std::cout << "June";
    } else if (monthNumber == 7) {
        std::cout << "July";
    } else if (monthNumber == 8) {
        std::cout << "August";
    } else if (monthNumber == 9) {
        std::cout << "September";
    } else if (monthNumber == 10) {
        std::cout << "October";
    } else if (monthNumber == 11) {
        std::cout << "November";
    } else if (monthNumber == 12) {
        std::cout << "December";
    } else {
        std::cout << "Invalid number";
    }

    // Output
    std::cout << "" << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
