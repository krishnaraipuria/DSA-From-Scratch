#include <iostream>
using namespace std;
int mySqrt(int x) {
        int ans;
        int left=1;
        int right=x;
        if(x==0){
            return 0;
        }
        while(left<=right){
            long long int mid= left+((right-left)/2);
            long long int m=mid*mid;
            if(m==x){
                ans=mid;
                break;
            }
            else if(m>x){
                right=mid-1;
            } 
            else{
                ans=mid;
                left=mid+1;
            }     
        }
       return ans;}


int main(){
    int x=8;
    int p=1;
    double ans=mySqrt(x);
    double incer=0.1;
    for(int i=1;i<=x;i++){
              while ((ans + incer) * (ans + incer) <= x) {
            ans += incer;
        }
        incer/= 10;
    
        }
        cout<<ans;
    }
