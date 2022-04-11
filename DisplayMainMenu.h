//
// Created by terje on 28.03.2022.
//
#include <iostream>
#include <vector>

#ifndef CPPVALIDINTCHECKER_DISPLAYMAINMENU_H
#define CPPVALIDINTCHECKER_DISPLAYMAINMENU_H


void MMenu(const std::vector<std::string>& text_of_each_menu_choices ){
    int count = 0;

    for (auto &text: text_of_each_menu_choices) {
        std::cout << count+1 << ". "<<text << std::endl;
        count++;
    }

}
#endif //CPPVALIDINTCHECKER_DISPLAYMAINMENU_H
