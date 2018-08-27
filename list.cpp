#include <string>
#include <iostream>
#include "list.h"

List::List(){
    head = nullptr;
}

List::List(Node* n){
    head = n;
}

void List::printList(){
    for(Node* iter = head; iter != NULL; iter = iter->next)
        std::cout << iter->val << std::endl;
}

void List::removeNode(Node* n){
   //edge cases first node
   if(!(n->prev)){
       n->next->prev = nullptr;
       delete n;
       return;
   }
   //edge case last node
   if(!(n->next)){
       n->prev->next = nullptr;
       delete n;
       return;
   }
   //general case
   n->prev->next = n->next;
   n->next->prev = n->prev;
   delete n;
   return;
}


void List::clearNodesAfter(Node* n){
    while(n->next)
        removeNode(n->next);
}

void List::addNodeToEnd(Node* n){
    //list empty
    if(!head){
        head = n;
        n->prev = n->next = nullptr;
        return;
    }
    Node* iter = head;
    while(iter->next)
        iter=iter->next;

    iter->next = n;
    iter->next->prev = iter;
}







