#include <iostream>
using namespace std;
int main(){
    int arr[6]={1,10,7,6,14,9};
    bool swapped=false; // only optimisation if arr is sorted so TC is o(n) best TC
    for(int i=0;i<6;i++){
        for(int j=0;j<6-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped=false){
            //already sorted
            break;
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}