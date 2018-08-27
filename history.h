#ifndef HISTORY_H
#define HISTORY_H
#include <string>
#include "list.h"

class History{
    private:
        Node* current;
        List data;
    public:
        History();
        void printList();
        void navigate(std::string url);
        void backward();
        void forward();
};

#endif




