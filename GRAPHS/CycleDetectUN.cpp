//Cycle Dectection in Undirected graphs
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
bool isCycleBFS(unordered_map<int,vector<int>> adj, unordered_map<int,bool> visited,int node){
    unordered_map<int,int> parent;
    parent[node]=-1;
    queue<int> q;
    q.push(node);
    visited[node]=1;
    while(q.empty()){
        int frontnode=q.front();
        q.pop();

        for(auto i:adj[frontnode]){
            if(visited[i]==true && i!=parent[frontnode]){
                return true;
            }
            else if(!visited[i]){
                q.push(i);
                visited[i]=true;
                parent[i]=frontnode;
            }
        }
    }
    return false;
}
bool isCycleDFS(unordered_map<int,vector<int>> adj, unordered_map<int,bool> visited,int node, int parent){
    visited[node]=true;

    for(auto i: adj[node]){
        if(!visited[i]){
            bool cycleDtet=isCycleDFS(adj,visited,i,node);
            if(cycleDtet) return true;
        }
        else if(i!=parent){
            return true;
        }
    }
    return false;
}
int main(){
    unordered_map<int,vector<int>> adj;
    unordered_map<int,bool> visited;
    vector<vector<int>> edges; // gievn 
    prepare(adj,edges);


    int tnode; //given
    for(int i=0;i<tnode;i++){
        if(!visited[i]){
            bool ans= isCycleBFS(adj,visited,i);
            //bool ans= isCycleDFS(adj,visited,i,-1);
            if(ans==true){
                cout<<"YES CYCLE IS THERE MADAM";
            }
        }
    }
    cout<<"NO";
}
//LINERE