#include <iostream>
using namespace std;
int sum(int arr[],int size){
    if(size<0){
        return 0;
    }
    int ans=sum(arr+1,size-1);
    return ans+arr[0];
}
int main(){
    int arr[5]={3,2,5,1,6};
    int size=5;
    cout<<sum(arr,size);
}