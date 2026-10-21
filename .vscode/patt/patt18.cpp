#include <iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    int d=0;
   cin>>n;
     while(i<=n){
          int j=1;
          int c=n;
           c=c-i+1;
          while(j<=c){
              cout<<j;
              j=j+1;
          }
         int star= i+d-1;
         while(star){
             cout<<"*";
            star=star-1;
         }
          int num=n-d;
          while(num){
              cout<<num;
              num=num-1;
          }
          d=d+1;
          cout<<endl;
          i=i+1;
          
     }
}