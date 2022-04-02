#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    vector<int> indeg(8,0);
 int m = 7, n =7;
 vector<vector<int>> adj(m+1,vector<int>(m+1,0));
 for(int i=1;i<m;i++){
     int x,y;
     cin>>x>>y;
     adj[x][y]=1;
     indeg[y]++;
 }
 for(int i=1;i<8;i++){
     if(indeg[i]==0){
         q.push(i);
     }
 }
 while(!q.empty()){
     int x = q.front();
     q.pop();
     cout<<x<<" ";
     for(int i= 1;i<=7;i++){
            if(adj[x][i]==1){
             indeg[i] = indeg[i] - 1;
         
         
         if(indeg[i]==0)
             q.push(i);}
     }
 }
    return 0;
}
