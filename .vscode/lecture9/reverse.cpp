#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end= n-1;
    while(start<=end){
     swap(arr[start], arr[end]);
     start++;
     end--;
    }
}


void printa(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}
int main(){
    int n=6;
    int arr[6]={1,2,3,4,5,6};
    int arrd[5]={1,2,3,4,5};

    reverse(arrd,5);
    reverse(arr,6);
    printa(arrd,5);
    printa(arr,6);
    // for(int m=(n-1);m>=0;m--){
    //    cout<<arr[m]<<endl;
    // }

}