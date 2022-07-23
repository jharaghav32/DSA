#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    vector<int> visi(8,0);
    vector<vector<int>> adj(8,vector<int>(8,0));
    for(int i=0;i<7;i++){
        int x,y;
        cin>>x>>y;
        adj[x][y]=1;
        adj[y][x]=1;
    }
    // same as level order traversal 
    int i=1;
    int node;
    q.push(i);
    cout<<i<<" ";
    visi[i]=1;
    while(!q.empty()){
        node = q.front();
        q.pop();
        for(int j=1;j<8;j++){
            if(adj[node][j]==1 && visi[j]==0){
                cout<<j<<" ";
                visi[j]=1;
                q.push(j);
            }
        }
    }
    
    

    return 0;
}
