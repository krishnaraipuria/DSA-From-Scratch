#include <iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cin>>n;
     while(i<=n){
         int j=1;
         int c=i;
         while(j<=i){
            cout<<c<<" ";
            j=j+1;
            c=c-1;
         }
          cout<<endl;
          i=i+1;
          
     }
}