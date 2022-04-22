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
  int arr[]={10,15,-5,15,-10,-5};
  int n =6;
  int target =0;
  int sum =0;
   for(int i=0;i<n;i++){
       sum =0;
       for(int j=i;j<n;j++){
           sum += arr[j];
           if(sum==0)
           {
               cout<<"Yes"<<endl;
               return;
           }
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