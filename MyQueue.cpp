#include<iostream>
#include "StackQueue.cpp" 
using namespace std; 

class MyQueue : public StackQueue {

    private: 
        int *array; 
        int Size; 
        int head ; 
        int tail ; 

    public :
            MyQueue(){

            }
            MyQueue(int size){
                this->Size  = size ; 
                array = new int[Size] ; 
                head = -1 ; 
                tail = -1; 
            }
            bool Push(int value){
                if( !isFull() ){
                    if( isEmpty() ){
                        head += 1 ; 
                    }
                    tail += 1; 
                    array[tail] = value ; 
                    return true ; 
                } 
                return false; 
            }
            int Pop(){
                if( !isEmpty() ){
                    int value ; 
                    value = array[head] ; 
                    head += 1  ;  
                    if( head == tail && tail == Size ){
                        head = -1 ; 
                        tail = -1 ; 
                    }
                    return value; 
                } 
                return 0; 
            }
            bool isFull(){
                return tail >= Size - 1 ; 
            }
            bool isEmpty(){
                return tail < 0 ;  
            }
            void display(){
                if( isEmpty() ){
                    cout<< "This is Empty!" ; 
                }
                else {
                    for( int i = head ; i <= tail ; i++ ){
                        cout<< array[i] << " " ; 
                    }
                    cout<< endl ; 
                }
            }

};