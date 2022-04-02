#include <bits/stdc++.h>
using namespace std;

bool iscycle(int src,vector<vector<int>>& adj,vector<int> &visi,int par){
    visi[src]=1;
    for(auto i : adj[src]){
        if(i!=par){
            if(visi[i]==1)
            return true;
            
            if(!visi[i] && iscycle(i,adj,visi,src))
            return true;
        }
    }
    return false;
}

int main()
{
 int m = 3, n =3;
 
  vector<int> visi(3,0);
 // For adjacency list
 
 vector<vector<int>> adj(m+1);

for(int i=1;i<m;i++){
     int x,y;
     cin>>x>>y;
     adj[x].push_back(y);
     adj[y].push_back(x);
 }
 int i=1;
 if(iscycle(i,adj,visi,-1))
 cout<<"cycle is present ";
 else
 cout<<"cycle is not present";
 
    return 0;
}
