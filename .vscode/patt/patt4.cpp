#include <iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cin>>n;
     while(i<=n){
         int j=n;
         while(j<=n){
            cout<<j<<" ";
            j=j-1;
            if(j==0){
                break;
            }
         }
          cout<<endl;
     i=i+1;
     
     }


         
    
    
}