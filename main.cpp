#include <iostream>
#include "history.h"

int main(void){
    std::string userInput;
    History historyWidget;

    std::cout<< "Browser started.\n\n";
    
    std::cout<< "Enter a website url to navigate to that website.\n";
    std::cout<< "Enter 'b' to go back to the previous page.\n";
    std::cout<< "Enter 'f' to go forward to the next page.\n";
    std::cout<< "Enter 'p' to dump the current state of the widget.\n\n";

    std::cout<< "Starting navigation from homepage.\n";

    while(1){
        std::cin >> userInput;

        if(userInput == "b")
            historyWidget.backward();

        else if(userInput == "f")
            historyWidget.forward();
        
        else if(userInput == "p")
            historyWidget.printList();

        else
            historyWidget.navigate(userInput);
            
    }
}







