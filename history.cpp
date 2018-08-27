#include <string>
#include <iostream>
#include "history.h"
#include "list.h"

History::History(){
    current = new Node("HOMEPAGE");
    data = List(current);
}

void History::printList(){
    std::cout<<"\n\n";
    data.printList();    
    std::cout<<"\n\n";
}

void History::navigate(std::string url){
    if(current->val == url){
        std::cout<<"Already on that page, no new page loaded.\n";
        return;
    }

    Node *newPage = new Node(url);
    data.clearNodesAfter(current);
    data.addNodeToEnd(newPage);
    current = current->next;
    std::cout << "Navigated to page " << current->val << "\n";
}
void History::backward(){
    if(!(current->prev)){
        std::cout<<"Already at beginning of history.\n";
        return;
    }
    current = current->prev;
    std::cout << "Moved back to page " << current->val << "\n";
    return;
}
void History::forward(){
    if(!(current->next)){
        std::cout<<"Already at end.\n";
        return;
    }
    current = current->next;
    std::cout << "Moved forward to page " << current->val << "\n";
    return;
}







