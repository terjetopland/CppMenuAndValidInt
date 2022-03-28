//
// Created by terje on 28.03.2022.
//
#include <iostream>
#include <vector>
#include "DisplayMainMenu.h"

#ifndef CPPVALIDINTCHECKER_CHECKVALIDINT_H
#define CPPVALIDINTCHECKER_CHECKVALIDINT_H
int ReadUserInput(int max_valid_int) {
    int min_number = max_valid_int % max_valid_int;
    int max_number = max_valid_int;

    static int count = 0;
    count++;

    std::cout << "\nPlease choose one" << std::endl;
    int user_input{};
    std::cin >> user_input;

    if (user_input < min_number  || user_input > max_number || std::cin.fail() ) {
        std::cout
                << "What you entered isn't valid.\n"
                << "You have entered invalid values " << count << " times\n"
                << "Please enter a valid integer from the menu.\n"
                << std::endl;
        std::cin.clear();
        std::cin.ignore();

        return ReadUserInput(max_valid_int);
    }

    return user_input;
}

#endif //CPPVALIDINTCHECKER_CHECKVALIDINT_H
