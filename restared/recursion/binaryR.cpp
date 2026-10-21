#include <iostream>
using namespace std;
bool binary(int arr[],int s,int n, int e){
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==n){
        return true;
    }
    if(arr[mid]>n){
       return binary(arr,s,n,mid-1);
    }
    else{
       return binary(arr,mid+1,n,e);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int n;
    cin>>n;
    cout<<binary(arr,0,n,size-1);
}