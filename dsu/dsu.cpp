#include<bits/stdc++.h>
using namespace std;
// CYCLE DETECTION USING DISJOINT SET UNION
// MADE EVERY ELEMENT AS ITS PARENT NODE FIRST OF ALL

const int N = 1e5+6;
vector<vector<int>> edges;
vector<int> parent(N);
vector<int> size(N);
void make(int node){
    parent[node]=node;
    size[node]=1;
}
int find_set(int node){
    if(parent[node]==node)
    return node;
    return parent[node]=find_set(parent[node]);
}
void Union(int a,int b){
    int x = find_set(a);
    int y = find_set(b);
    if(size[x]>size[y])
    swap(x,y);
    parent[x]=y;
    size[y] += size[x];
}
bool cycle=false;
int  main(){
    for(int i=0;i<N;i++){
        make(i);
    }
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        edges.push_back({u,v});
    }
    
    for(auto i : edges){
        int u = i[0];
        int v = i[1];
        int x = find_set(u);
        int y = find_set(v);
        if(x==y){
          cycle = true;
        }
          else{
              Union(u,v);
          }
    }
    if(cycle)
    cout<<"cycle is present ";
    else
    {
        cout<<"cycle is not present";
    }
       return 0;
}