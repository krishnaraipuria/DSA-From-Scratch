//Union by Rank & Path Compression
//Disjoint Set & Kruskal's Algorithm
#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>
using namespace std;
bool cmp(vector<int> &a, vector<int> &b){
    return a[2]<b[2];
}
void makeset(vector<int> &parent,vector<int> &rank,int n){
    for(int i=0;i<n;i++){
        parent[i]=i;
        rank[i]=0;
    }
}
int parents(vector<int> &parent, int node){
    if(parent[node]==node){
        return node;
    }
    return parent[node]=parents(parent,parent[node]);
}
void unionset(int u, int v, vector<int> &parent, vector<int> & rank){
    u=parents(parent,u);
    v=parents(parent,v);
    if(rank[u]<rank[v]){
        parent[u]=v;
    }
    else if(rank[u]>rank[v]){
        parent[v]=u;
    }
    else{
        parent[v]=u;
        rank[u]++;
    }
}
int main(){
    int n;
    vector<vector<int>> edges;
    vector<int> parent(n);
    vector<int> rank(n);
    makeset(parent,rank,n);

    //Krukal's Algorithm;
    int minWeights=0;
    sort(edges.begin(),edges.end(),cmp);
    for(int i=0;i<edges.size();i++){
        int u=parents(parent, edges[i][0]);
        int v=parents(parent,edges[i][1]);
        int wt=edges[i][2];
        if(u!=v){
            minWeights+=wt;
            unionset(u,v,parent,rank);
        }
    }
}
//TC:- O(m log m);
//SC:- O(n);