#include<iostream>
#include "linkedlist.h"

using namespace std;


int main()
{

    Linkedlist l;
    l.create(5);
    l.push(5);
    l.append(10);
    l.insert(l.head->next->next, 18);
    cout << l.size() << endl;
    l.print();

    return 0;
}


/*struct Node {

    int data;
    Node *next;
};

void print_list(Node *n)
{
    while(n != nullptr)
    {
        cout << n->data << endl;
        n = n->next;
    }
}

void insert_at_beginning(Node **head, int d)
{
    Node *nd = new Node;
    nd->data = d;
    nd->next = *head;
    *head = nd;   
}

void insert_after(Node *previous, int d)
{
    Node *nd = new Node;
    nd->data = d;
    nd->next = previous->next;
    previous->next = nd;
}

void insert_at_end(Node **head, int d)
{
    Node *current = *head;
    Node *nd = new Node;
    nd->data = d;
    nd->next = nullptr;
    while(current->next != nullptr)
        current = current->next;
    
    current->next = nd;
}*/