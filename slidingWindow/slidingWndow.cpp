#include<bits/stdc++.h>
// Here question is we have to find the minimum sum of k consecutive element 
// Here we use the sliding window technique
// In this first we add the first k element 
// then we subtract the first element and add the next element of array
using namespace std;
 
 #define f(j,n) for(int i=j;i<n;i++)


int main(){

int arr[]={-2,10,1,3,2,-1,4,5};
int n= sizeof(arr)/sizeof(arr[0]);
int k ;
cin>>k;
int sum=0;
int ans = INT_MAX;
f(0,k){
 sum = sum + arr[i];
}
cout<<sum<<" ";
 ans = min(ans,sum);
f(1,n-k+1){
    sum = sum - arr[i-1];
    sum = sum + arr[i+k-1];
    ans = min(ans,sum);
    cout<<sum<<" ";
}
cout<<endl;
cout<<ans;

    return 0;
}