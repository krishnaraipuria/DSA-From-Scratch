#include <iostream>
using namespace std;
int main(){
    int n;
    int a=0;
    int b=1;
    // int sum;
    int m;
    cin>>n;
    for(int i=3;i<=n;i++){
       int  sum=a+b;
        a=b;
        b=sum;
        }
        cout<<b;
}