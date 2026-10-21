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
void dfs(int node,unordered_map<int,vector<int>> adj, unordered_map<int,bool> visited,vector<int> &ans){
    ans.push_back(node);
    visited[node]=true;

    for(auto i: adj[node]){
        if(!visited[i]){
            dfs(i,adj,visited,ans);
        }
    }

}
int main(){
    unordered_map<int,vector<int>> adj;
    vector<vector<int>> ans;
    unordered_map<int,bool> visited;
    vector<vector<int>> edges; // gievn 
    prepare(adj,edges);

    //trverse all;
    int tnode; //given
    for(int i=0;i<tnode;i++){
        if(!visited[i]){
            vector<int> components;
            dfs(i,adj,visited,components);
            ans.push_back(components);
        }
    }
}