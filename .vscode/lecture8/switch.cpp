#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    switch(n){

        case 1: cout<<"First"<<endl;
                break;  // continue; error : continue statement not within a loop
        case 2: cout<<"Second"<<endl;
                break;
        default: cout<<"INT"<<endl;

    }
}