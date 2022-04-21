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
   int arr[]={3,1,2,4,0,1,3,2};
   int n =8;
   int left=0;
   int right = n-1;
   int ans =0;
   int leftmax=0,rightmax=0;
   while(left<=right){
       if(arr[left]<=arr[right]){
           if(arr[left]>=leftmax) leftmax=arr[left];
           else ans += leftmax-arr[left];
           left--;
       }
       else{
           if(arr[right]>=rightmax) rightmax=arr[right];
           else ans += rightmax-arr[right];
           right--;
       }
   } 
   cout<<ans<<endl;
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