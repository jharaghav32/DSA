// problem link:https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

// first we are doing this by appling two for loop take each subarray and then find the max sum
// approach 2: Use kadane's algorithm
/* In this approach we are taking ans as arr[0] as subarray must contain one element now we traverse a loop in an array and add each element element in sum take out max of these if the sum is less than 0 means it is negative then we initialised it to zeros because it doesn't make sense for us to take it if we add any other number it only decrease the sum and we want the max sum subarray
so not need to take after traversing the whole we print the ans which we got */



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
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n = 8;
    int sum;
    int maxi =INT_MIN;
    for(int i=0;i<8;i++){
        sum =0;
        for(int j=i;j<8;j++){
            sum += arr[j];
            maxi = max(maxi,sum);
        }
    }
    cout<<maxi<<endl;
}
void kadane(){
   int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n = 8;
    int sum =0;
    int maxi = arr[0];
    for(int i=0;i<8;i++){
        sum += arr[i];
        maxi = max(sum,maxi);
        if(sum<0){
            sum =0;
        }

    }
    cout<<maxi<<endl;
}
int main(){
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin>>t;
    while(t--){
       // solved();
        kadane();
    }
return 0;
}