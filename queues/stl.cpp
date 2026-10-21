#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(17);
    q.push(16);
    q.pop();
    cout<<q.size()<<endl;  
    cout<<q.front();
}