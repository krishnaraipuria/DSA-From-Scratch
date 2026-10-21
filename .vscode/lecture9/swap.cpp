#include <iostream>
using namespace std;
int main(){
      int arr[10]={1,2,3,4,5,6,7,8,9,10};
     int start=0;
     int end=1;
     while(start<10){
      swap(arr[start],arr[end]);
      start=start+2;
      end=end+2;
     }
     for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
     }
}