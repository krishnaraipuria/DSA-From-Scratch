#include<iostream>
#include<vector>
using namespace std;
//fibpnaacii
int n=6;
vector<int> dp(n+1,-1);
int fibo(int n){
    if(n<=1) return n;
    if(dp[n]==-1){
        dp[n]=fibo(n-1)+fibo(n-2);
    }
    return dp[n];
}
int main(){
    cout<<fibo(6);

    vector<int> dp(n+1,-1);
    dp[0]=0;
    dp[1]=1;
    for(int i=0;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
}
//0 1 1 2 3 5 8 
//T.C-: O(n);
//S.C-:O(n);
//top-down= recu+memo
//bottom-up=tabu
//---------tabu;