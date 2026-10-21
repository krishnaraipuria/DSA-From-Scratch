#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
void prepare(unordered_map<int,vector<pair<int,int>>> &adj, vector<vector<int>>& edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        int w=edges[i][2];
        adj[u].push_back({v,w});
    }
}
void topo(unordered_map<int,vector<pair<int,int>>> &adj,unordered_map<int,bool> &visited,stack<int> &st, int node){
    visited[node]=true;
    for(auto i:adj[node]){
        int neighb=i.first;
        if(!visited[neighb]){
            topo(adj,visited,st,neighb);
        }
    } 
    st.push(node);
}
//--------// Shortest Path in Directed G// 
int main(){
    unordered_map<int,vector<pair<int,int>>> adj;
    vector<vector<int>> edges;
    int n;
    int souce,des;
    prepare(adj,edges);

    // vector<int> toposort;
    unordered_map<int,bool> visited;
    stack<int> st;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            topo(adj,visited,st,i);
        }
    }
    vector<int> dis(n,INT_MAX);
    dis[souce]=0;
    while(!st.empty()){
        int top=st.top();
        st.pop();
        if(dis[top]!=INT_MAX){
            for(auto i: adj[top]){
                if(dis[top]+i.second<dis[i.first]){
                    dis[i.first]=dis[top]+i.second;
                }
            }
        }
    }
}
//TC:- O(n+e);
//SC:- O(n+e);