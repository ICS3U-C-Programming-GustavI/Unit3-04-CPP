// Copyright 2025 Gustav I. All rights reserved.
// Made by: Gustav I.
// Made on 2025-03-24
// This program checks if the user input is a negative/positive number or zero.

#include <iostream>

int main() {
    int num;  // Declare an integer variable

    std::cout << "Enter an integer: ";
    std::cin >> num;  // Get user input

    if (num > 0) {
        std::cout << num << " is a positive number." << std::endl;
    } else if (num < 0) {
        std::cout << num << " is a negative number." << std::endl;
    } else {
        std::cout << num << " is just zero." << std::endl;
    }

    return 0;
}
