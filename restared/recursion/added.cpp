#include <iostream>
using namespace std;
int added(int arr[],int size){
    if(size==0){
        return 0;
    }
    int ans=arr[0]+ans;
    return added(arr+1,size-1);
}
int main(){
    int arr[5]={3,2,5,1,6};
    int size=5;
    cout<<added(arr,size);
}