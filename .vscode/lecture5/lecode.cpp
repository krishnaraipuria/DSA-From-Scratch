#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
        int nexnum;
        int s;
        while(n/10<=0){
            nexnum=n;
            s=n%10;
        n=n/10;
        n=nexnum/10;
        cout<< s <<endl;
        }

    }