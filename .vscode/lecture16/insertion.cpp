#include <iostream>
using namespace std;
int main(){
    int arr[6]={5,7,3,9,2,0};
    for(int i=1; i<6;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}