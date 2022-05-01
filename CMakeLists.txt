cmake_minimum_required(VERSION 3.21)
project(CPPValidIntChecker)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPPValidIntChecker main.cpp CheckValidInt.h DisplayMainMenu.h MyCountDownToExit.cpp MyCountDownToExit.h GotoThisLineInConsole.cpp GotoThisLineInConsole.h)
