#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+6;



vector<int> parent(N);
vector<int> sz(N);
void makeset(int node ){
    parent[node]=node;
    sz[node]=1;
}



int findset(int node){
    if(parent[node]==node)
    return node;
    else
    return parent[node]=findset(parent[node]);
}
void unionset(int a,int b){
    int u = findset(a);
    int v = findset(b);
    
    if(u!=v){
        if(sz[a]>sz[b])
        swap(a,b);
        parent[a]=b;
        sz[b] += sz[a];
    }
}
int main()
{ 
    for(int i=0;i<N;i++){
        makeset(i);
    }
    int n,m;
    cin>>n>>m;
    vector<vector<int>> edge;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edge.push_back({w,u,v});
    }
    sort(edge.begin(),edge.end());
    
     int mst =0;
    for(auto i : edge){
        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = findset(u);
        int y = findset(v);
        if(x==y){
            continue;
        }
        else{
            cout<<u<<" "<<v<<endl;
            
            mst = mst + w;
            unionset(x,y);
        }
    }
 cout << mst ;
    return 0;
}
