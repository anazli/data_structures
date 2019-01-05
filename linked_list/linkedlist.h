#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
#include "node.h"

class Linkedlist {

public:

    Linkedlist(){head = new Node(0);}
    ~Linkedlist()
    {
        delete[]head;
    }

    void create(int n);
    void print();
    int size();

    void push(int n);
    void append(int n);
    void insert(Node *previous, int n);

    Node *head;

};

void Linkedlist::create(int n)
{
    Node *current = head;
    for(int i = 1 ; i <= n ; ++i)
    {
        Node *nd = new Node(i);
        current->next = nd;
        current = current->next;
    }
}

void Linkedlist::print()
{
    Node *current = head;
    while(current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
    delete[]current;
}

int Linkedlist::size()
{
    Node *current = head;
    int i = 0;
    while(current != nullptr)
    {
        current = current->next;
        i++;
    }
    delete[]current;
    return i;
}


void Linkedlist::push(int n)
{
    Node *nd = new Node;
    nd->data = n;
    nd->next = head;
    head = nd;
}


void Linkedlist::append(int n)
{
    Node *current = head;
    Node *last = new Node(n);
    while(current->next != nullptr)
        current = current->next;

    current->next = last;
}

void Linkedlist::insert(Node *previous, int n)
{
    Node *nd = new Node;
    nd->data = n;
    nd->next = previous->next;
    previous->next = nd;
}

#endif