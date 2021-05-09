#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

struct node{
    int data;
    node *next;
    node *previous ;
};

class LinkedList
{
    protected:
        node *front1;
        node *back1;
    public:
        LinkedList();
        ~LinkedList();
        void appendNode(int);
        void displayNodes();
        void displayNodesReverse();
        void destroyList();
};

#endif // LINKEDLIST_H_INCLUDED
