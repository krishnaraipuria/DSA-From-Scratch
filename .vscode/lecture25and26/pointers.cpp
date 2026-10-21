#include <iostream>
using namespace std;
int main(){
    int num=5;
    int *pt=&num;
    cout<<"address of num is "<<*pt<<endl;
    cout<<"size of "<< sizeof(pt);
}