//
// Created by Gabriel Torres on 9/28/22.
//

#ifndef NODE_H
#define NODE_H
template <class Type>

// Define Node Class
class Node {
public:
    Node *prev, *next;
    Type element;

    Node(Type o){
        element = o;
        next = NULL;
        prev = NULL;
    }
};
#endif