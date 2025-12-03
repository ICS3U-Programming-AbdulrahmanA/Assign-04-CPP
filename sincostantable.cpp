// Copyright (c) 2025 Abdul All rights reserved.
// Created By : Abdul
// Date : December 3rd, 2025
// This program generates a table of sine, cosine, or tangent values for degrees 0 to 360

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to the degree table generator!" << std::endl;

    // variable to hold user input
    std::string user_input;
    // keep asking until a valid choice is entered
    while (true) {
        std::cout << "Please enter either sin, cos, or tan to see the degree table: ";
        // get user input
        std::cin >> user_input;
        if (user_input == "sin" || user_input == "cos" || user_input == "tan") {
            // valid input, exit loop
            break;
        } else {
            // invalid input, inform user and repeat
            std::cout << "Invalid input, try again." << std::endl;
        }
    }

    // if user requested sin table
    if (user_input == "sin") {
        // loop degrees from 0 to 360 and print sine values
        for (int degree = 0; degree <= 360; degree++) {
            float value = std::sin(degree);
            // print degree and value with 5 decimal places
            std::cout << degree << " = " << std::fixed << std::setprecision(5) << value << std::endl;
        }
    } else if (user_input == "cos") {
        // iterate degrees from 0 to 360 and print cosine values
        for (int degree = 0; degree <= 360; ++degree) {
            float value = std::cos(degree);
            // print degree and value with 5 decimal places
            std::cout << degree << " = " << std::fixed << std::setprecision(5) << value << std::endl;
        }
    } else {
        // assume user requested tan table; iterate and print tangent values
        for (int degree = 0; degree <= 360; ++degree) {
            float value = std::tan(degree);
            // print degree and value with 5 decimal places
            std::cout << degree << " = " << std::fixed << std::setprecision(5) << value << std::endl;
        }
    }
}
