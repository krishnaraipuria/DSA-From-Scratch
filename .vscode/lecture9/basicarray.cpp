#include <iostream>
using namespace std;
void parray(int array[], int size){
        for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }

}
int main() {
    int num[15];
    // cout<<num[1];

    int sec[5]={5,7,11};
    // cout<<sec[2];

    int th[9]={1,2,3,4,5,6,7,8};
      
    // parray(th,8);
    cout<<sizeof(sec)/sizeof(int);

}