// problem link:https://practice.geeksforgeeks.org/problems/common-elements1132/1#
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
    int n1=3;
    int n2=3;
    int n3=3;
    int A[]={1,2,3};
    int B[]={3,3,3};
    int C[]={2,3,4};
     set<int>s;
            set<int>s1;
            set<int>s2;
            vi c;
         for(int i=0;i<n1;i++){
             s.insert(A[i]);
         }
         for(int i=0;i<n2;i++){
             auto it = s.find(B[i]);
             if(it !=s.end())
             s1.insert(*it);
         }
         for(int i=0;i<n3;i++){
             auto it = s1.find(C[i]);
         if(it != s1.end())
         s2.insert((*it));
         }
         for(auto i:s2)
         c.push_back(i);
         for(auto i : c){
             cout<<i<<" ";
         }
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