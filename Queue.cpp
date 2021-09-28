#include<iostream>
#include<vector> 
#include "StackQueue.cpp" 
using namespace std; 

class Queue : public StackQueue {
    struct Node {
        int value ; 
        Node *next ; 
        Node( int a ){
            this->value = a ; 
            next = NULL ; 
        }
    };

    public : 
            Node *head; 
            Node *tail ; 
            Queue(){
                head = NULL ; 
                tail = NULL ; 
            }
            bool Push(int value){
                if( !isFull() ){
                    if( isEmpty() ){
                        Node *temp = new Node( value ) ; 
                        temp->next = tail; 
                        head = temp ; 
                        tail = temp ; 
                        return true; 
                    }
                    Node *temp = new Node( value ) ; 
                    tail->next = temp ;  
                    tail = temp ;  
                    return true; 
                }
                return false; 
            }
            int Pop(){
                 
                if( !isEmpty() ){
                    

                    Node *test = head;
       
                    int value = test->value ;                                  
                    head = test->next; 
                    if( head == tail ){
                        head = NULL; 
                        tail = NULL ; 
                        
                    }
                    return value; 
                }
                return 0; 
            }
            bool isFull(){
                return false; 
            }
            bool isEmpty(){
                return head == NULL && tail == NULL  ;
            }

            void display(){
                Node *temp = head; 
                if( isEmpty() ){
                    cout<<"This is Empty!" ; 
                }
                else {
                    vector<int> ackerman; 
                    while( temp != NULL ){                    // ở đây dùng head làm lỗi pop 
                        ackerman.push_back( temp->value ) ;    // head 
                        temp = temp->next ;                    // head phải là temp ; 
                    }
                    for( int i = 0 ; i < ackerman.size() ;i++ ){
                        cout<< ackerman[i] << " " ; 
                    }
                    cout<< endl ; 
                }
            }
             
}; 