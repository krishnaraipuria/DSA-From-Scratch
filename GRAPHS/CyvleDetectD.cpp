//Cycle Dectection in Directed graphs
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

    }
}
bool isCycleDFS(unordered_map<int,vector<int>> adj, unordered_map<int,bool> visited,int node,unordered_map<int,bool> &dfsvisited){
    visited[node]=true;
    dfsvisited[node]=true;
    for(auto nnegi:adj[node]){
        if(!visited[nnegi]){
            bool cycledected=isCycleDFS(adj,visited,nnegi,dfsvisited);
            if(cycledected){
                return true;
            }
        }
        else if(dfsvisited[node]){
            return true;
        }
    }
    dfsvisited[node]=false;
    return false;
}
int main(){
    unordered_map<int,vector<int>> adj;
    unordered_map<int,bool> visited;
    vector<vector<int>> edges; // gievn 
    unordered_map<int,bool> dfsvisited;
    prepare(adj,edges);


    int tnode; //given
    for(int i=0;i<tnode;i++){
        if(!visited[i]){
            bool ans= isCycleDFS(adj,visited,i,dfsvisited);
            if(ans==true){
                cout<<"YES CYCLE IS THERE MADAM";
            }
        }
    }
    cout<<"NO";
//----------------------------
    // forBFS; //isCycleBFS
    vector<int> indgree(tnode);
    for( auto i: adj){
        for(auto j: i.second){
            indgree[j]++;
        }
    }
    queue<int> q;
    for(int i=0;i<tnode;i++){
        if(indgree[i]==0) q.push(i);
    }
    int count=0;
    while(!q.empty()){
        int front=q.front();
        q.pop();

        count++;
        for(auto i: adj[front]){
            if(indgree[i]==0) q.push(i);
        }
    }
    if(count==tnode) return false;
    else return true;
}
// TC:number of node + edges
//LINERE