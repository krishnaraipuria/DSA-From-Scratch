#include <iostream>
#include <stack> 
using namespace std;
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"top ele "<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    cout<<"size of stack "<<s.size();
}