// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: May, 9th, 2022
// This program asks the user to enter a level. It then converts the level to a
// percentage and displays it to the user.
#include <iostream>
#include <iomanip>


// this function determines the middle percentage of the level
// user has entered.
int CalcMark(std::string averageGrade) {
    if (averageGrade == "4+") {
        return 98;
    } else if (averageGrade == "4") {
       return 90;
    } else if (averageGrade == "4-") {
        return 83;
    } else if (averageGrade == "3+") {
        return 78;
    } else if (averageGrade == "3") {
        return 75;
    } else if (averageGrade == "3-") {
        return 71;
    } else if (averageGrade == "2+") {
        return 68;
    } else if (averageGrade == "2") {
        return 65;
    } else if (averageGrade == "2-") {
        return 61;
    } else if (averageGrade == "1+") {
        return 58;
    } else if (averageGrade == "1") {
        return 55;
    } else if (averageGrade == "1-") {
        return 51;
    } else if (averageGrade == "R") {
        return 25;
    } else {
        return -1;
    }
}


int main() {
    // declare variables
    std::string userLevel;
    int percentage;

    // get user input
    std::cout << "Enter the level you want to convert to a percentage: ";
    std::cin >> userLevel;
    std::cout << std::endl;

    // call function
    percentage = CalcMark(userLevel);

    // error checking process & displaying results to user.
    if (CalcMark(userLevel) == -1) {
        std::cout << "Invalid, " << userLevel << " is not a valid level.";
    } else {
        std::cout << "Level " << userLevel << " has a middle percentage of ";
        std::cout << percentage << "%.";
    }
}
