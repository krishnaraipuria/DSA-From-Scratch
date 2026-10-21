#include <iostream>
using namespace std;
// int main(){
//     int arr[5]={4,3,6,1,2};
//     for(int i=0;i<5;i++){
//         int mn=i;
//            for(int j=i+1; j<5;j++){
//             if(arr[j]<arr[mn]){
//                 mn=j;
//             }
//            }
//            swap(arr[mn],arr[i]);
//            cout<<arr[i]<<endl;
//     }
// }
int main(){
    int arr[5]={4,6,8,3,0};
    for(int i=0;i<5;i++){
        int min=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
        cout<<arr[i]<<endl;
    }
}
























