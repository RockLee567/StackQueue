#pragma once 
#include<iostream>

using namespace std; 

class StackQueue {
    virtual bool Push(int value) = 0 ; 
    virtual int Pop() = 0 ; 
    virtual bool isFull() = 0 ; 
    virtual bool isEmpty() = 0 ; 

    virtual void display() = 0 ; 
};