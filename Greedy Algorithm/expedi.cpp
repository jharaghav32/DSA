#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l=25;
    int p=10;
    vector<pair<int,int>> v(4);
    for(int i=0;i<4;i++){
        cin>>v[i].first>>v[i].second;
        v[i].first = l-v[i].first;
    }
   sort(v.begin(),v.end());
   priority_queue<int,vector<int>> pq;
   int ans=0;
   bool flag = 0;
   for(int i=0;i<4;i++){
       while(p<v[i].first){
           if(pq.empty()){
               flag=1;
               break;
           }
           
           p = p + pq.top();
           pq.pop();
           ans++;
           pq.push(v[i].second);
       }
       if(flag)
       break;
       pq.push(v[i].second);
   }
   while(!pq.empty()&& p<l){
       p = p+ pq.top();
       pq.pop();
       ans++;
   }
   if(p<l && !flag){
       cout<<"-1"<<endl;
   }
    
    cout<<ans;

    return 0;
}
