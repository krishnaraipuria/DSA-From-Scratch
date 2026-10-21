#include<iostream>
using namespace std;

int area(int l, int b){
    int a=l*b;
    return a;
}
int per(int l, int b){
    int p= 2*(l+b);
    return p;
}

int main(){
    int l;
    int b;
    cin>>l;
    cin>>b;
    cout<<area(l,b)<<endl;
    cout<<per(l,b)<<endl;
}
