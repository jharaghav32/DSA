#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj(1000);
bool visited[1000]={false};
void dfs(int s){
    if(visited[s]) return;
    visited[s]=true;
    cout<<s<<" ";
    for(auto u : adj[s]){
        dfs(u);

    }
}

int main(){
    int m,n;  // m is no of edges and n is no of nodes
    cin>>m>>n;


for(int i=0;i<m;i++){
     int x,y;
     cin>>x>>
     adj[x].push_back(y);
     adj[y].push_back(x);
 }
 dfs(1);
return 0;
}