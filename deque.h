//CSCE 3301 - Algorithms and Data Structures
//deque.h
//Deques and Doubly Linked Lists
//
// Created by Gabriel Torres on 9/23/22.

#ifndef DEQUE_H
#define DEQUE_H
#include "node.h"
#include <iostream>
using namespace std;

template <class Type>
class Deque {
private:
    Node<Type> *front, *rear;
    int count;

public:
    Deque(){
        count = 0;
        front = new Node<Type>();
        rear = new Node<Type>();

        front->next = rear;
        rear->prev = front;
    };
    ~Deque(){
        cout << "Deque has been deconstructed\n";
    };
    bool isEmpty() {
        if (size() == 0) {
            return true;
        } else {
            return false;
        }
    };
    int size() { return count; };
    Type first(){
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return -1;
        } else {
            return front->element;
        }
    };
    Type last(){
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return -1;
        } else {
            return rear->element;
        }
    };
    void insertFirst(Type o){
        auto *newNode = new Node<Type>();
        newNode->element = o;
        if (front == NULL){
            front = rear = newNode;
        }else{
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
        count++;
    };
    void insertLast(Type o){
        auto *newNode = new Node<Type>();
        newNode->element = o;
        if (rear == NULL){
            front = rear = newNode;
        }else{
            newNode->prev = rear;
            rear->next = newNode;
            rear = newNode;
        };

        count++;
    };
    Type removeFirst(){
        if (isEmpty()){
            cout << "Deque is empty.\n";
        }else{
            auto *tempNode = front;
            front = front->next;
            if (front == NULL){
                rear = NULL;
            }else {
                front->prev = rear;
            }
            free(tempNode);
            count--;
        }
        return front->element;
    };
    Type removeLast() {
        if (isEmpty()){
            cout << "Deque is empty.\n";
        }else{
            auto *tempNode = rear;
            rear = rear->prev;
            if (rear == NULL){
                front = NULL;
            }else {
                rear->next = front;
            }
            free(tempNode);
            count--;
        }
        return rear->element;
    };
};
#endif
