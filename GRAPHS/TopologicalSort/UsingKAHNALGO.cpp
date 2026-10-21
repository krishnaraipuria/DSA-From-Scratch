//using BFS basically;
//Kahn's Algo;
#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<vector<int>> edges;
    int n;
    unordered_map<int,vector<int>> adj;
    vector<int> indegree(n);
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
    }
    for(auto i:adj){
        for(auto j: i.second){
            indegree[j]++;
        }
    }
    queue<int> q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vector<int> ans;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        ans.push_back(front);
        for(auto i: adj[front]){
            indegree[i]--;
            if(indegree[i]==0)  q.push(i);
        }
    }
}
//TC:O(node+edges) linerar;
//SC: linere;