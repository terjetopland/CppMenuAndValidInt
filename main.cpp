#include <iostream>
#include "CheckValidInt.h"
#include "DisplayMainMenu.h"

int main() {


    MMenu({"This is the first menu", "This is the second", "This is the third option", "Fourth option, could be e.g. 'Exit'"});
    ReadUserInput(4);

    return 0;
}
