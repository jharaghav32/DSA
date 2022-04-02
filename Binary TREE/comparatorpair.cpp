#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int> a, pair<string,int> b){
    if(a.first != b.first){
        return a.second>b.second;
    }
    return a.first<b.first;
}

int main(){
vector<pair<string,int>> pr;
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>pr[i].first>>pr[i].second;
}
sort(pr.begin(),pr.end(),cmp);
for(auto i : pr){
    cout<<i.first<<" "<<i.second<<endl;
}







    return 0;
}