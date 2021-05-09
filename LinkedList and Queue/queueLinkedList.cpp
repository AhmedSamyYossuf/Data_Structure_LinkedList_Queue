#include "queueLinkedList.h"
#include <iostream>
using namespace std;

QueueLinkedList::QueueLinkedList(){}
QueueLinkedList::~QueueLinkedList(){}

void QueueLinkedList::enqueue(int x)
{
    appendNode(x);
}

bool QueueLinkedList::isEmpty()
{
    if(front1 == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int QueueLinkedList::dequeue()
{
    if(isEmpty())
    {
        return -1;
    }
    int retVal = front1->data;
    node *temp = front1;
     if(front1->next == NULL)
    {
        back1  = NULL;
        front1 = NULL;
    }
    else
    {
        front1 = front1->next;
        front1->previous = NULL;
    }
    delete temp;
    return retVal;
}
