// Here we have to find the number of subarray with sum is equal to k using map technique we find it in very less time 
#include<bits/stdc++.h>

using namespace std;
int main(){
int arr[]={1,-1,1,-1};
int n = sizeof(arr)/sizeof(arr[0]);
unordered_map<int,int> mp;
mp.insert({0,1});
int sum =0,ans = 0;
int k;
cin>>k;                 //Enter the sum of subarray;
for(int i =0;i<n;i++){
sum = sum+ arr[i];
if(mp.find(sum-k)!=mp.end()){
    ans = ans + mp[sum-k];
}
mp[sum]++;

}
cout<<ans;



    return 0;
}