#include <iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"address of arrr "<< arr << endl;
    cout<<"address of arrr "<< &arr[1] << endl;
    cout<<"address of arrr "<< *arr << endl;

    int i=3;
    cout<<i[arr]<<endl; //works beacuse arr[i]=*(arr+i) works in internllly
}