#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define DEFAULT_SIZE 8

class Queue
{
    private:
        int size1;
        int front1;
        int back1;
        int* values;

    public:
        Queue(int size1 = DEFAULT_SIZE);
        ~Queue();
        bool isFull();
        bool isEmpty();
        void enqueue(int);
        int dequeue();
};


#endif // QUEUE_H_INCLUDED
