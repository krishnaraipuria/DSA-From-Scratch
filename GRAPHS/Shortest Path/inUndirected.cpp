#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
void prepare(unordered_map<int,vector<int>> &adj, vector<vector<int>>& edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
}
//--------// Shortest Path in Undirected G// BFS
int main(){
    unordered_map<int,vector<int>> adj;
    vector<vector<int>> edges;
    int n;
    unordered_map<int,bool> visited;
    unordered_map<int,int> parents;
    int souce,des;
    prepare(adj,edges);
    queue<int> q;
    q.push(souce);
    parents[souce]=-1;
    visited[souce]=true;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        for(auto i: adj[front]){
            if(!visited[i]){
                visited[i]=true;
                parents[i]=front;
                q.push(i);
            }
        }
    }
    //now shrtest path;
    vector<int> ans;
    int currnode=des;
    ans.push_back(des);
    while(currnode!=souce){
        currnode=parents[currnode];
        ans.push_back(currnode);
    }
    reverse(ans.begin(),ans.end());
}
//TC: O(number of node + number of edges);
//SC: O(number of node + number of edges);
//linear;