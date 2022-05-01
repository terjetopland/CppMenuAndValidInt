#include <iostream>
#include "CheckValidInt.h"
#include "DisplayMainMenu.h"
#include "MyCountDownToExit.h"


int main() {

    CountDown(10);

    bool exit = false;
    //e.g. 4 menu choices (could be whatever you want)
    int max_menu_choices = 4;


    //continues until
    while (!exit) {

        int check{};

        //Takes whatever strings u want to display and displays it to the console
        MMenu({"This is the first menu", "This is the second", "This is the third option",
               "Fourth option, could be e.g. 'Exit'"});

        //Ask the user to choose one of the valid numbers up 'max_valid_int', and then validates it.
        check = ReadUserInput(max_menu_choices);

        if(check == 1){
            std::cout << "You entered menu choice " << check << std::endl << std::endl;
        }
        if(check == 2){
            std::cout << "You entered menu choice " << check << std::endl << std::endl;
        }
        if(check == 3){
            std::cout << "You entered menu choice " << check << std::endl << std::endl;
        }


        if(check !=4) {
            exit = false;
        }
        else {
            exit = true;
            std::cout   << "You entered " << check << std::endl
                        <<"Closing menu and program" << std::endl;


        }
    }
    return 0;
}
