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
    string s="this is a text text";
    string t="text";
    int slen=s.size();
    int tlen=t.size();
     int i=0,j=0,index=-1;
     bool indi=false;
     while(i<slen){
         j=0;
         while(j<tlen){
             
             if(t[j]==s[i]){
                 if(!indi){
                     indi=true;
                     index=i;
                 }
                i++;
                j++;
             }
             else{
                 j=0;
                 index=-1;
                 indi=false;
                 i++;
             }
         }
         if(indi){
             cout<<"pattern found at index "<<index<<endl;
             index=-1;
             indi=false;
         }
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