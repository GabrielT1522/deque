//CSCE 3301 - Algorithms and Data Structures
//node.h
//Deques and Doubly Linked Lists
//
// Created by Gabriel Torres on 9/23/22.

#ifndef NODE_H
#define NODE_H
template <class Type>

// Define Node Class
class Node {
public:
    Node *prev, *next;
    Type element;
};
#endif