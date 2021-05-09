#include "queue.h"
#include <iostream>
using namespace std;

Queue::Queue(int size1)
{
    this->size1 = size1;
    values = new int[size1];
    front1 = 0;
    back1 = 0;
}

Queue::~Queue()
{
    delete[] values;
}

bool Queue::isFull()
{
    if( (back1 + 1) % size1 == front1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Queue::isEmpty()
{
    if(back1 == front1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Queue::enqueue(int x)
{
    if(!isFull())
    {
        back1 = (back1 + 1) % size1;
        values[back1] = x;
    }
}

int Queue::dequeue()
{
    if(!isEmpty())
    {
        front1 = (front1 + 1) % size1;
        return values[front1];
    }
return 0;
}
