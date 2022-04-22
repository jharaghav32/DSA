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
    int arr[]={4,2,0,1,6};
    int n =5;
    int sum =0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum==0 || arr[i]==0 || mp[sum])
        {
            cout<<"Yes"<<endl;
            return;
        }
        else{
            mp[sum]=1;
        }
    }
    cout<<"No"<<endl;
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