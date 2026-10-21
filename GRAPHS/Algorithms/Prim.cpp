// To find the Minimum spanning tree (MST);
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void prepare(unordered_map<int,vector<pair<int,int>>> &adj, vector<vector<int>>& edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        int w=edges[i][2];
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
}
int main(){
    int n;
    vector<int> key(n+1,INT_MAX);
    vector<bool> mst(n+1,false);
    vector<int> parent(n+1,-1);
    key[1]=0;
    vector<vector<int>> edges;
    unordered_map<int,vector<pair<int,int>>> adj;
    prepare(adj,edges);

    for(int i=1;i<=n;i++){
        int mini=INT_MAX;
        int u;
        for(int v=1;v<=n;v++){
            if(mst[v]==false && key[v]<mini){
                u=v;
                mini=key[v];
            }
        }
        mst[u]=true;

        for(auto it:adj[u]){
            int v=it.first;
            int w=it.second;
            if(mst[v]==false && w<key[v]){
                parent[v]=u;
                key[v]=w;
            }
        }
    }
}
// What is MST?
// when you are converted grphs into a tree with n nodes and n-1 edges;
// every node is reacheable to every node;

//TC: O(n2)->O(n log n) after pq;
//SC:O(n);