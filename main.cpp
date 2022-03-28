#include <iostream>
#include "CheckValidInt.h"
#include "DisplayMainMenu.h"

int main() {

    //Takes whatever strings u want to display and displays it to the console
    MMenu({"This is the first menu", "This is the second", "This is the third option", "Fourth option, could be e.g. 'Exit'"});

    //Ask the user to choose one of the valid numbers up 'max_valid_int', and then validates it.
    ReadUserInput(4);

    return 0;
}
