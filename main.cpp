#include <string>
#include <iostream>
#include "history.h"

int main(void){
    History historyModule;
    historyModule.navigate("yolo.com");
    
    historyModule.printList();
}
// Node* back();
// Node* forward();







