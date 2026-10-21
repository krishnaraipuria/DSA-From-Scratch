#include <iostream>
using namespace std;
// 1 shows prime num and 0 shows not prime num
bool isprime(int n) {

   for(int i=2;i<n; i++){
     if(n%i==0){
        return 0;
     }
   }
   return 1;  
}
int main(){
 int n;
 cin>>n;
 cout<<isprime(n);
}