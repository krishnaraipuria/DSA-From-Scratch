#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int m=0;m<n; m++){
        sum=sum+arr[m];
    }
  cout<<sum;
}