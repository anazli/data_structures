#ifndef NODE_H
#define NODE_H

class Node {

public:

    Node(int d = 0, Node *n = nullptr):data(d), next(n){}


    int data;
    Node *next;

};

#endif