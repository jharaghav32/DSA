// problem link : https://leetcode.com/problems/subarray-sums-divisible-by-k/submissions/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
const int Mod = 1'000'000'007;
const int N = 3e5, M = N;
ll lcm(int a,int b){
    ll a1=a;
    ll b1=b;
    return a1*b1/__gcd(a1,b1);
}
void solved(){
    int arr[]={2,5,8,2,3,1};
    int k=3;
    int count=0;
    int sum=0;
    unordered_map<int,int>mp;
    for(int i=0;i<6;i++){
        sum +=arr[i];
        int rem = (sum%k+k)%k;
        if(mp.find(rem)!=mp.end())
        count += mp[rem];
        if(rem==0)
        count++;
        mp[rem]++;
    }
    cout<<"no of subarray divisible by 3 is : "<<count;
}
int main(){
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;
    while(t--){
        solved();
    }
return 0;
}