#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int next=n;
        int r;
        int count=0;
         while(next/2>0){
             n=next;
             next=n/2;
             r=n%2;
             if(r==1){
                 count=count+1;
             }
         }
         return count;

    // int a=11;
    // int b=2;
    // cout<< a/b;
    }