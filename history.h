#ifndef HISTORY_H
#define HISTORY_H
#include <string>

struct Node{
    std::string val;
    Node* next;
    Node* prev;
    Node(std::string url){val = url; next = prev = NULL;}
    Node(std::string url, Node* n, Node* p){
        val = url; 
        next = n;
        prev = p;
    }
};

class History{
    private:
        Node* head;
        Node* current;

    public:
        History();
        void printList();
        void navigate(std::string url);
        Node* back();
        Node* forward();

};

#endif




