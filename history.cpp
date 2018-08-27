#include <string>
#include <iostream>
#include "history.h"

History::History(){
    head = NULL;
    current = NULL;
}

void History::printList(){
    for(Node* iter = head; iter != NULL; iter = iter->next)
        std::cout << iter->val << std::endl;
        
}
void History::navigate(std::string url){
    Node *newnode = new Node(url);

    if(head == NULL)
        head = newnode;
    
    else{
        Node* iter = head;
        while(iter->next)
            iter = iter->next;
        iter->next = newnode;
    }
}
// Node* back();
// Node* forward();







