#include <iostream>
using namespace std;
bool linear(int arr[],int size,int n){
    if(size<=0){
        return false;
    }
    if(n==arr[0]){
        return true;
    }
    return linear(arr+1,size-1,n);
}
int main(){
int arr[5]={1,2,3,4,5};
int size=5;
int n;
cin>>n;
cout<<linear(arr,size,n);
}