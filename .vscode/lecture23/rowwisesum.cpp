#include<iostream>
using namespace std;
int Rowisesum(int arr[][4],int n, int m){
    int largetrow=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum= arr[i][j]+sum;
        }
        if(largetrow<sum){
            largetrow=sum;
        }
    }
    return largetrow;
}
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,20,11,12}};
    cout<<Rowisesum(arr,3,4);
}