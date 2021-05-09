#ifndef QUEUELINKEDLIST_H_INCLUDED
#define QUEUELINKEDLIST_H_INCLUDED

#include "LinkedList.h"

class QueueLinkedList : public LinkedList
{
    public:
    QueueLinkedList();
    ~QueueLinkedList();
    void enqueue(int);
    int dequeue();
    bool isEmpty();
};


#endif // QUEUELINKEDLIST_H_INCLUDED
