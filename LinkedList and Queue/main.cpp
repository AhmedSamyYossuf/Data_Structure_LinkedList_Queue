#include "LinkedList.h"
#include "queue.h"
#include "queueLinkedList.h"
#include <iostream>
#include <stdio.h>
using namespace std;



int main()
{

        //--to use Linked List--\\

    LinkedList list1 = new LinkedList();
    list1->appendNode(10);
    list1->appendNode(20);
    list1->appendNode(30);
    list1->displayNodes();
    list1->displayNodesReverse();
    delete list1;


    /*
        //--to use Queue--\\

    Queue *qu  = new Queue();
    qu->enqueue(10);
    qu->enqueue(20);
    qu->enqueue(30);
    qu->enqueue(40);
    cout <<"data in queue is : "<<endl;
    cout<<qu->dequeue()<<endl;
    cout<<qu->dequeue()<<endl;
    cout<<qu->dequeue()<<endl;
    cout<<qu->dequeue()<<endl;
    delete qu;
    */

    /*
        //--to use Queue Linked List--\\

    QueueLinkedList *quLis = new QueueLinkedList();
    quLis->enqueue(10);
    quLis->enqueue(20);
    quLis->enqueue(30);
    cout <<"data in queueLinkedList is : "<<endl;
    cout <<quLis->dequeue()<<endl;
    cout <<quLis->dequeue()<<endl;
    cout <<quLis->dequeue()<<endl;
    delete quLis;
    */

    return 0;
}
