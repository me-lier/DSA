#include<iostream>
#include<queue> 
#include<vector>
using namespace std;

void bfs(vector<vector<int>> adj){
    queue<int> q;
    vector<bool> visited(adj.size(), false);
    q.push(0);
    visited[0] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int ele : adj[node]){
            if(!visited[ele]){
                visited[ele] = true;
                q.push(ele);
            }
        }
        cout<<node<<", ";
    }
}

void dfs_rec(int node, vector<vector<int>> adj, vector<bool> &visited){
    cout<<node<<", ";
    visited[node] = true;
    for(int ele : adj[node]){
        if(!visited[ele]) dfs_rec(ele, adj, visited);
    }
}

void dfs(vector<vector<int>> adj){
    vector<bool> visited(adj.size(), false);
    dfs_rec(0, adj, visited);
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> adj(n);
    for(int i = 0; i<m; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<endl;
    bfs(adj);
    cout<<endl;
    dfs(adj);
}