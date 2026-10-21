#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;
void prepare(unordered_map<int,vector<int>> &adj, vector<vector<int>>& edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
}
void bfs(unordered_map<int,vector<int>> adj, unordered_map<int,bool> visited,vector<int> &ans,int node){
    queue<int> q;
    q.push(node);
    visited[node]=1;
    while(q.empty()){
        int frontnode=q.front();
        q.pop();

        ans.push_back(frontnode);
        for(auto i:adj[frontnode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}
int main(){
    unordered_map<int,vector<int>> adj;
    vector<int> ans;
    unordered_map<int,bool> visited;
    vector<vector<int>> edges; // gievn 
    prepare(adj,edges);

    //trverse all;
    int tnode; //given
    for(int i=0;i<tnode;i++){
        if(!visited[i]){
            bfs(adj,visited,ans,i);
        }
    }
}