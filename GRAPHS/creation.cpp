#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
// template <typename T>
class graph{
    public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v, bool direction){
        //if firection =0->undirected;
        //direction =1-> directed;
        adj[u].push_back(v);
     if(direction==0){
        adj[v].push_back(u);
     }   
    }

    void printadjList(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j: i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};
int main(){
    
    graph g;

    int n;
    cout<< "Enter the number of nodes"<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printadjList();
}
//explam input
// Enter the number of nodes
// 5
// Enter the number of edges
// 6
// 0 1
// 1 2
// 2 3
// 3 1
// 3 4
// 0 4
// For AdjList:-
// Add Edge T.C: O(m) and S.C: O(n+m)
// Print Edge T.C: O(nm) and S.C: O(1)