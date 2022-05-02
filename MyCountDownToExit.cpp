//
// Created by terje on 01.05.2022.
//

#include "MyCountDownToExit.h"
#include <Windows.h>
#include <iostream>
#include <string>

void CountDown(int secondsCountDown){
    std::string stop = "stop";
    std::string theProgramWillClose = "The program will close after ";
    std::string pleasePressEnter = "Please press 'Enter' to continue!";
    std::string seconds = " seconds. ";

    std::cout   << theProgramWillClose
                << secondsCountDown
                << seconds
                << pleasePressEnter;

    while(secondsCountDown >= 1 && stop == "stop") {

        if(secondsCountDown == 1) {

            for (int i = 0; i <= pleasePressEnter.size(); i++) {
                std::cout << '\b';
            }
            for (int i = 0; i <= seconds.size(); ++i) {
                std::cout << '\b';
            }

            std::cout   << secondsCountDown
                        << " "
                        << seconds
                        << pleasePressEnter
                        << std::endl << std::endl;
        }

        if(secondsCountDown <= 9 && secondsCountDown > 1) {
            //gotoLineInConsole(-1,0);

            for (int i = 0; i <= pleasePressEnter.size(); i++) {
                std::cout << '\b';
            }
            for (int i = 0; i <= seconds.size(); ++i) {
                std::cout << '\b';
            }

            std::cout   << secondsCountDown
                        << " "
                        << seconds
                        << pleasePressEnter;
            std::cout.flush();
        }

        if(secondsCountDown > 9) {
            for (int i = 0; i <= pleasePressEnter.size(); i++) {
                std::cout << '\b';
            }
            for (int i = 0; i <= seconds.size(); ++i) {
                std::cout << '\b';
            }

            std::cout   << secondsCountDown
                        << seconds
                        << pleasePressEnter;
            std::cout.flush();
        }

        Sleep(1000);
        secondsCountDown--;
    }
}
