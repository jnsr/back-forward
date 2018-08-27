#ifndef LIST_H 
#define LIST_H 
#include <string>

struct Node{
    std::string val;
    Node* next;
    Node* prev;
    Node(std::string url){val = url; next = prev = NULL;}
    Node(std::string url, Node* p){val = url; next = NULL; prev = p;}
    Node(std::string url, Node* n, Node* p){
        val = url; 
        next = n;
        prev = p;
    }
};

class List{
    private:
        Node* head;

    public:
        List();
        List(Node* n);
        void printList();
        void removeNode(Node* n);
        void clearNodesAfter(Node* n);
        void addNodeToEnd(Node* n);
};

#endif




