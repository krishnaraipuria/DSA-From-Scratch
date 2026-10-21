#include <iostream>
using namespace std;
 void sortarr(int *arr, int n){
    if(n==0|| n==1){
        return ;
    }
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    sortarr(arr, n-1);
 }
int main(){
    int arr[6]={1,10,7,6,14,9};
    sortarr(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}