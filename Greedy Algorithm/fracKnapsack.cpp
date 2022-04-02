#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    double a1 = a.first/a.second;
    double a2 = b.first/b.second;
    return a1>a2;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> kn(n);
    for(int i=0;i<n;i++){
        cin>>kn[i].first>>kn[i].second;
    }
    sort(kn.begin(),kn.end(),cmp);
     double ans = 0;
     double w;
     cin>>w;
     for(int i=0;i<n;i++){
         if(w>=kn[i].second){
             ans = ans + kn[i].first;
             w = w-kn[i].second;
             continue;
         }
         double v = (double)kn[i].first/kn[i].second;
         ans = ans + (v*w);
         w=0;
         break;
     }
    
    cout<<ans;
    return 0;
}
