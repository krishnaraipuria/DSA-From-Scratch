#include <iostream>
using namespace std;
 bool linears(int arr[], int size ,int key){
        int a;
        for(int i=0;i<size;i++){
        a= arr[i];
        if(a==key){
          return true;
        }
    }  
    return false;
 }          
int main() {
    int n;
    int arr[9]={1,2,3,4,5,6,7,8};
    cin>>n;
    cout<<linears(arr,8,n);
}