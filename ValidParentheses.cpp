#include <iostream>
#include <stack> 
#include <queue>
using namespace std; 

class Solution{
    public : 
            bool isValid( string name ){
                // Dùng Stack 
                /*
                stack<char> oppo;
                for( int i = 0 ; i < name.size() ; i++ ){
                    oppo.push( name[i] ) ; 
                }
                char c;

                while( !oppo.empty() ) {
                    if( oppo.top() == ')' || oppo.top() == '}' || oppo.top() == ']' ){
                        c = oppo.top() ; 
                        oppo.pop() ; 
                        if( oppo.top() == '(' && c == ')' || 
                            oppo.top() == '{' && c == '}' ||
                            oppo.top() == '[' && c == ']'     ) {
                            oppo.pop() ; 
                        }
                        else {
                            return false; 
                        }
                    }
                    else {
                        return false; 
                    }
                }
                return true; 
                */

               // Dùng Queue
                queue<char> oppo;
                for( int i = 0 ; i < name.size() ; i++ ){
                    oppo.push( name[i] ) ; 
                }
                char c;

                while( !oppo.empty() ) {
                    if( oppo.front() == '(' || oppo.front() == '{' || oppo.front() == '[' ){
                        c = oppo.front() ; 
                        oppo.pop() ; 
                        if( oppo.front() == ')' && c == '(' || 
                            oppo.front() == '}' && c == '{' ||
                            oppo.front() == ']' && c == '['     ) {
                            oppo.pop() ; 
                        }
                        else {
                            return false; 
                        }
                    }
                    else {
                        return false; 
                    }
                }
                return true; 
            }
            
};

int main(){ 
    string name = "(){}[]{}"; 
    Solution s; 
    cout<< s.isValid( name ) ; 
    return 0; 
}