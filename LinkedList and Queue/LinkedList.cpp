#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
    front1 = NULL;
    back1  = NULL;
}

LinkedList::~LinkedList()
{
    destroyList();
}

void LinkedList::appendNode(int data)
{
    node *n = new node();
    n->data = data ;
    if(back1 == NULL)
    {
        back1 = n;
        front1 = n;
    }
    else
    {
        back1->next = n;
        n->previous = back1;
        back1 = n;
    }
}

void LinkedList::displayNodes()
{
    cout << "Nodes :"<<endl;
    node* temp = front1;
    while(temp != NULL)
    {
        cout << " " << temp->data<<endl;
        temp = temp->next;
    }
}

void LinkedList::displayNodesReverse()
{
    cout << "Nodes in reverse order :"<<endl;
    node* temp = back1;
    while(temp != NULL)
    {
        cout << " " << temp->data<<endl;
        temp = temp->previous;
    }
}

void LinkedList::destroyList()
{
    node* temp = back1;
    while(temp != NULL)
    {
        node* temp2 = temp;
        temp = temp->previous;
        delete temp2;
    }
    back1  = NULL;
    front1 = NULL;
}
