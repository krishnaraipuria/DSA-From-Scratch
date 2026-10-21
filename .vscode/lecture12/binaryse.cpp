#include <iostream>
using namespace std;

int binaryse(int arr[], int size, int key){
     int start=0;
     int end=size-1;
     int mid= (start+end)/2; // mid=start+(end-start)/2 for no run time er
     while(start<=end){
      if(arr[mid]==key){
        return mid;
      }
      if(key>arr[mid]){
        start=mid+1;
      }
      if(key<arr[mid]){
        end=mid-1;
      }
       mid= (start+end)/2; // mid=start+(end-start)/2 for no run time er
     }
     return -1;
}

int main(){

    int even[6]={5,7,7,8,8,10};
    int odd[6]={1,3,5,7,9,11};

 int index= binaryse(even,6,8);
 cout<< index<<endl;

 int inde= binaryse(odd,6,20);
 cout<< inde<<endl;

}