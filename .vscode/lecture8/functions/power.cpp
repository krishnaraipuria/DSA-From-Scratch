#include <iostream>
using namespace std;
int pow(int a, int b){
int ans=1;
       for(int i=1; i<=b; i++){
          ans=ans*a;
       }
       return ans;
    }
int main() {
 int a=2;
 int b=2;
//  pow(a,b);
 cout<<pow(a,b); //function ban gya ek ye ab pow

    
}