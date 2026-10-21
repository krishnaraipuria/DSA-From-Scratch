#include <iostream>
using namespace std;
int getmax(int num[],int n){

    int maxi= INT_MIN;
        for(int i=0;i<n;i++){

            maxi=max(maxi,num[i]);

            // if(num[i]> max){
            //     max=num[i];
            // }
        }
     return maxi;
}
int getmin(int num[],int n){

    int min= INT_MAX;
        for(int i=0;i<n;i++){
             if(num[i]< min){
                 min=num[i];
             }
        }
  return min;
}
int main() {
   int size;
   cin>>size;
   int arr[100];     
      for(int i=0;i<size;i++){
          cin>>arr[i];
      } 
   cout<<getmax(arr,size)<<endl;
   cout<<getmin(arr,size);
}