
#include<iostream>
#include "StackQueue.cpp" 
#include "MyStack.cpp" 
#include "MyQueue.cpp" 
#include "Stack.cpp"  
#include "Queue.cpp" 
using namespace std; 

int main(){
    MyStack *stackArray = new MyStack( 4 ) ; 
    stackArray->Push( 5 ) ; 
    stackArray->Push( 8 ) ; 
    stackArray->Push( 2 ) ; 
    cout<< stackArray->Push( 4 ) << endl ; 
    cout<< stackArray->Push( 10 ) << endl ;
    //cout<< stackArray->Push( 9 ) ;  
    stackArray->display() ;
    stackArray->Pop() ; 
    stackArray->display() ; 
    cout<< endl ; 
    ///////////////////////////////////////////////////
    MyQueue *queueArray  = new MyQueue(4) ; 
    queueArray->Push( 20 ) ; 
    queueArray->Push( 15 ) ; 
    queueArray->Push( 16 ) ; 
    queueArray->Push( 12 ) ; 
    queueArray->display()  ; 
    queueArray->Pop() ; 
    queueArray->display() ; 
    cout<< endl ; 
    ///////////////////////////////////////////////////
    Stack *LLStack = new Stack() ; 
    LLStack->Push(4) ; 
    LLStack->Push(8) ; 
    LLStack->Push(2) ;
    LLStack->Push(10) ;
    LLStack->display() ; 

    LLStack->Pop() ; 
    LLStack->display() ;   
    cout<< endl ; 
    ///////////////////////////////////////////////////
       
    Queue *LLQueue = new Queue() ; 
    LLQueue->Push( 6 ) ; 
    LLQueue->Push( 10 ) ; 
    LLQueue->Push( 3 ) ; 
    LLQueue->Push( 15 ) ; 
    LLQueue->display() ; 

    LLQueue->Pop() ; 
    LLQueue->display() ; 
     
}
