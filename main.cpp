// CSCE 3301 - Algorithms and Data Structures
// main.cpp
// Deques and Doubly Linked Lists
//
// Created by Gabriel Torres on 9/23/22.

#include "deque.h"
#include <iostream>

using namespace std;
int main() {
    Deque<int> intQ;

    printf("isEmpty(1): %d\n", intQ.isEmpty() ? 1 : 0);
    intQ.insertFirst(4);
    printf("removeLast(4): %d\n", intQ.removeLast());
    intQ.insertFirst(5);
    intQ.insertFirst(12);
    intQ.insertLast(7);
    intQ.insertLast(13);
    printf("first(12): %d\n", intQ.first());
    printf("last(13): %d\n", intQ.last());
    printf("size(4): %d\n", intQ.size());
    printf("isEmpty(0): %d\n", intQ.isEmpty() ? 1 : 0);

    // removeLast() function returns value AFTER being executed.
    // cout lines show to prove correct last value is displayed.
    printf("removeLast(13) :%d\n", intQ.removeLast());
    //  cout << "intQ.last(): " << intQ.last() << endl;
    printf("removeLast(7) :%d\n", intQ.removeLast());
    //  cout << "intQ.last(): " << intQ.last() << endl;
    printf("removeLast(5) :%d\n", intQ.removeLast());
    //  cout << "intQ.first(): " << intQ.first() << endl;
    //  cout << "intQ.last(): " << intQ.last() << endl;
    printf("removeFirst(12) :%d\n", intQ.removeFirst());
    printf("size(0): %d\n", intQ.size());
    printf("isEmpty(1): %d\n", intQ.isEmpty() ? 1 : 0);

    return 0;
}