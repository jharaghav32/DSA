#include <bits/stdc++.h>
using namespace std;

int main()
{
 int m = 7, n =7;
 vector<vector<int>> adj(m+1,vector<int>(m+1,0));
 for(int i=0;i<m;i++){
     int x,y;
     cin>>x>>y;
     adj[x][y]=1;
     adj[y][x]=1;
 }
 for(int i =1;i<m+1;i++){
     for(int j=1;j<m+1;j++){
         cout<<adj[i][j]<<" ";
     }
     cout<<endl;
 }
 // For adjacency list
 int m = 7, n =7;
 vector<vector<int>> adj(m+1);

for(int i=0;i<m;i++){
     int x,y;
     cin>>x>>y;
     adj[x].push_back(y);
     adj[y].push_back(x);
 }
 for(int i=1;i<m+1;i++){
     cout<<i<<"->";
     for(auto it = adj[i].begin();it!=adj[i].end();it++){
         cout<<(*it)<<" ";
     }
     cout<<endl;
 }
 
    return 0;
}
