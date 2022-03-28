//
// Created by terje on 28.03.2022.
//
#include <iostream>
#include <vector>
#include "DisplayMainMenu.h"

#ifndef CPPVALIDINTCHECKER_CHECKVALIDINT_H
#define CPPVALIDINTCHECKER_CHECKVALIDINT_H
int ReadUserInput(const std::vector<int>& range_valid_numbers) {
    int min_number = 100;
    int max_number = 0;

    for (auto &valid: range_valid_numbers) {
        if(valid < min_number)
            min_number = valid;
        if(valid > max_number)
            max_number = valid;

    }

    static int count = 0;
    count++;

    std::cout << "\nPlease choose one" << std::endl;
    int user_input{};
    std::cin >> user_input;

    if (user_input < min_number  || user_input > max_number || std::cin.fail() ) {
        std::cout
                << "What you entered isn't valid.\n"
                << "Please enter a valid number.\n"
                << "count = " << count
                << std::endl;
        std::cin.clear();
        std::cin.ignore();

        return ReadUserInput(range_valid_numbers);
    }

    return user_input;
}

#endif //CPPVALIDINTCHECKER_CHECKVALIDINT_H
