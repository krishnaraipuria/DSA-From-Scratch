#include  <iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int n, int m ){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(target==arr[i][j]){
                return true;
            }
        }
    }
    return false;
}
int main() {
    int arr[3][4]; 

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>> arr[i][j];
        }
    }

        for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<< arr[i][j]<<" ";
        }
    }
    cout<<"Enter the element"<<endl;
    int target;
    cin>>target;
    if(isPresent(arr, target, 3,4)){
        cout<<"found it!";
    }
    else{
        cout<<"not found!";
    }
}