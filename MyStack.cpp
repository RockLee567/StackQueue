#include<iostream>
#include "StackQueue.cpp" 
using namespace std; 

class MyStack : public StackQueue {
    
    private:
        
        int *array ;
        int Size ;
        int head; 
    public : 
        MyStack(){

        } 
        MyStack(int size){
            this->Size = size; 
            array = new int[Size]  ;  
            head =  -1 ; 
        }
        bool Push( int value ){
            if( !isFull() ){
                head += 1 ;
                array[head] = value; 
                 
                return true; 
            }
            return false; 
        }
        int Pop(){
            if( !isEmpty() ){
                int value = array[head] ; 
                head -= 1; 
                return value; 
            }
            return 0; 
        }

        bool isFull(){
            return ( head >= Size - 1 ) ; 
        }
        bool isEmpty(){
            return ( head < 0 ) ; 
        }

        void display(){
            if( isEmpty() ){
                cout<< "This is empty!" << endl ; 
            }
            else {
                for( int i = 0 ; i <= head ; i++ ){
                    cout<< array[i] << " " ; 
                }
                cout<< endl ; 
            }
        }

};