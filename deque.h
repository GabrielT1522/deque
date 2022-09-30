//
// Created by Gabriel Torres on 9/23/22.
//

#ifndef DEQUE_H
#define DEQUE_H
#include "node.h"
#include <exception>
#include <iostream>
using namespace std;

template <class Type>
class Deque {
private:
    Node<Type> *front, *rear;
    int count;

public:
    Deque() {
        count = 0;
        front = NULL;
        rear = NULL;
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
        auto *newNode = new Node<Type>(o);
        if (newNode == NULL){
            cout << "Deque is full.\n";
        }else{
            if (front == NULL){
                front = newNode;
                rear = newNode;
            }else{
                newNode->next = front;
                front->prev = newNode;
                front = newNode;
            }
            count++;
        }
    };
    void insertLast(Type o){
        auto *newNode = new Node<Type>(o);
        if (newNode == NULL){
            cout << "Deque is full.\n";
        }else{
            if (rear == NULL){
                front = newNode;
                rear = newNode;
            }else{
                newNode->prev = rear;
                rear->next = newNode;
                rear = newNode;
            }
            count++;
        }
    };
    Type removeFirst(){
        if (isEmpty()){
            cout << "Deque is empty.\n";
        }else{
            Node<Type> *tempNode = front;
            front = front->next;
            if (front == NULL)
                rear = NULL;
            else
                front->prev = NULL;
            free(tempNode);
            count--;
        }
        return front->element;
    };
    Type removeLast(){
        if (isEmpty()){
            cout << "Deque is empty.\n";
        }else{
            Node<Type> *tempNode = rear;
            rear = rear->prev;
            if (rear == NULL)
                front = NULL;
            else
                rear->next = NULL;
            free(tempNode);
            count--;
        }
        return rear->element;
    };
};
#endif