#include <iostream>
using namespace std;
void printcount(int n){
    if(n==0){
        return ;
    }
   cout<<n<<endl;
   printcount(n-1);
    
}
int main(){
    int n;
    cin>>n;
    printcount(n);
}