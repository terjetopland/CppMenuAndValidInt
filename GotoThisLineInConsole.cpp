//
// Created by terje on 01.05.2022.
//

#include "GotoThisLineInConsole.h"
#include <windows.h>

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;
void gotoLineInConsole(int column, int row){
    CursorPosition.X = column;
    CursorPosition.Y = row;
    SetConsoleCursorPosition(console, CursorPosition);
}