#include <iostream>
using namespace std;
int fact(int n){
  int facto=1;
       for(int i=1;i<=n;i++){
        facto=facto*i;
        
       }
       return facto;
}

int ncr(int n, int r){
     int ans=(fact(n)/(fact(r)*fact(n-r)));
      return ans;
}
int main(){

int n=8;
int r=2;
 cout<<fact(r)<<endl<<ncr(n,r);
}