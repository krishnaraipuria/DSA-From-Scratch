#include <iostream>
using namespace std;
int facto(int n){
    if(n==0){
        return 1;
    }
    int ans=n*facto(n-1);
    return ans;
}
int main() {
    // int n, ans=1;
    // cin>>n;
    // while(n!=0){
    //     ans=n*ans;
    //     n--;
    // }  
    // cout<<ans;
    int n;
    cin>>n;
    cout<<facto(n);

}

