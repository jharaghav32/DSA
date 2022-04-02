#include<bits/stdc++.h>
using namespace std;
bool t[10][100];  /// yaha pe hamne no of element ke and sum ka array bnaya initialily false se initialise kr diya
// bool subsetsum(vector<int>&v,int sum,int n){
//     if(sum==0 ) return true;
//     if(n==0) return false;
//     if(sum>=v[n-1])
//     return subsetsum(v,sum-v[n-1],n-1) || subsetsum(v,sum,n-1);
//     else if(sum<v[n-1])
//     return subsetsum(v,sum,n-1);
// }
// bottom up approach
bool subsetsum(vector<int>&v,int sum,int n){
    for(int i=0;i<=sum;i++){
        for(int j=0;j<=n;j++){
            if(i==0) {
                t[i][j]=true ;
                }
            if(j==0) t[i][j]=false;
            if(i>=v[j-1])
            t[i][j]=t[i-v[j-1]][j-1] || t[i][j-1];
            else if(i<v[j-1])
            t[i][j]=t[i][j-1];
        }
    }
    return t[sum][n];
}
int main(){
vector<int>v = {2,3,7,8,10};
int sum = 11;
if(subsetsum(v,sum,v.size()))
cout<<"target match";
else
cout<<"target doesnot match";
return 0;
}