#include <iostream>
using namespace std;
bool issroted(int arr[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return issroted(arr+1, size-1);
}
int main(){
    int arr[10]={2,3,2222,5,6,7,8,9,10};
    int size=5;
    cout<<issroted(arr,size);
}