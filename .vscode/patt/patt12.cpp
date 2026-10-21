#include <iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    int c=0;
    cin>>n;
     while(i<=n){
         int j=1;
         while(j<=n){
             char ch = 'A'+ c;
             cout<<ch<<" ";
            j=j+1;
            c=c+1;
         }
          cout<<endl;
          i=i+1;
          
     }
}