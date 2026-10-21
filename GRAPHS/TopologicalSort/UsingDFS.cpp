// DAG;- Directed Acyclic Graph(ONLY);
//vertex u comes before v in the ordering
#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;
void toposort(int node, unordered_map<int,bool> &visited, stack<int> &st, unordered_map<int,vector<int>> &adj){
    visited[node]=true;
    for(auto i: adj[node]){
        if(!visited[i]){
            toposort(i,visited,st,adj);
        }
    }
    //catch;;;
    st.push(node);
}
int main(){
    vector<vector<int>> edges;
    int n;
    unordered_map<int,vector<int>> adj;
    stack<int> st;
    unordered_map<int,bool> visited;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            toposort(i,visited,st,adj); 
        }
    }  
    //toposort
    //to vector ans;
     vector<int> ans;
     while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
     }
}
//TC: O(Node+Ediges) linear;
//SC: O(n); linaer