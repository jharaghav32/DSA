#include <bits/stdc++.h>
using namespace std;

int main()
{
 int m = 7, n =7;
 vector<vector<int>> adj(m+1,vector<int>(m+1,0)); // here space complexity is O(n*n)
  // 2d vector ka size no of nodes ke etna hoga and to take 
 // the edge between two nodes we have to run for loop no of edge times
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
 int m = 7, n =7;   // here space complexity reduced to O(n+2*e)
 vector<int>adj[n+1];  //ya bhi size no of nodes ke barabbar hi hogi kyoki ham harek node ke compoent 
 // ke component component dekhege kis kis node se connected hai

for(int i=0;i<m;i++){
     int x,y;
     cin>>x>>y;
     adj[x].push_back(y); // yaha hamne undirected edge liya hai eska matlab dono taraf point krega 
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
