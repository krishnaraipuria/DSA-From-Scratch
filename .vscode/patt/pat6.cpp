#include <iostream>
using namespace std;
int main(){
    int n;
    int c=1;
    int i=1;
    cin>>n;
     while(i<=n){
         int j=1;
         while(j<=c){
            cout<<"*"<<" ";
            j=j+1;
         }
          cout<<endl;
          c=c+1;
          i=i+1;
     }
}