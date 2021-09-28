#include<iostream>
#include<list>
#include<vector> 
#include "StackQueue.cpp" 
using namespace std;  

class Stack : public StackQueue {
   
    struct Node     // sao class lại ko đc 
    {
        int value ; 
        Node *next; 
        Node( int a ){
            this->value = a; 
            next = NULL ; 
        }
    };
        
            
    public : 
                    
            Node *head ; 
            Stack(){
                head = NULL ; 
            }
            bool Push(int value){
                if( !isFull() ){
                    if( isEmpty() ){ 
                        Node *temp = new Node( value ) ; 
                        temp->next = head ; 
                        head = temp ; 
                        return true;                       // quên return 
                    }
                    Node *temp = new Node( value ) ; 
                    temp->next = head; 
                    head = temp ; 
                     
                    return true; 
                }
                return false; 
            }
            int Pop(){
                if( !isEmpty() ){
                    Node *temp = head ;
                    int value = temp->value;  
                    head = temp->next; 
                    
                    return value ; 
                }
                return 0; 
            }
            bool isFull(){
                return false ; 
            }
            bool isEmpty(){
                return ( head == NULL ) ; 
            }

            void display(){
                Node *temp = head ; 
                
                if( isEmpty() ){
                    cout<<"This is Empty!" ; 
                }
                else {
                    vector<int> eren ;
                    while( temp != NULL ){
                         
                        eren.push_back(temp->value) ; 
                        temp = temp->next;  
                    }
                    
                    for( int i = eren.size() - 1 ; i >= 0 ; i-- ){
                        cout<< eren[i]  << " " ; 
                    }
                    cout<< endl ; 
                }
            }
}; 