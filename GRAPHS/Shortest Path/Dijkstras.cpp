#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <set>
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
    unordered_map<int,vector<pair<int,int>>> adj;
    vector<vector<int>> edges;
    int n;
    int souce;
    prepare(adj,edges);

    set<pair<int,int>> st;
    vector<int> dis(n,INT_MAX);
    dis[souce]=0;
    st.insert({0,souce});
    while(!st.empty()){
        auto top= *(st.begin());

        int nodedistance=top.first;
        int topnode=top.second;
        st.erase(st.begin());
        for(auto i: adj[topnode]){
            if( nodedistance+ i.second<dis[i.first]){
                auto record=st.find({dis[i.first],i.first});
                //if record found;
                if(record!=st.end()){
                    st.erase(record);
                }

                dis[i.first]=nodedistance+i.second;
                st.insert({dis[i.first], i.first});
            }
        }
    }
}
//TC: O(number of edges log n);
//SC: O(n+e);