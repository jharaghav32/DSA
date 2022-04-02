#include <bits/stdc++.h>
using namespace std;
void minsumsub(int arr[],int k,int x,int n){
    int sum =0,ans=0;
    for(int i=0;i<k;i++){
        sum = sum + arr[i];
        if(sum<=x)
        ans = sum;
    }
    for(int i=k;i<n;i++){
        sum = sum - arr[i-k];
        sum = sum + arr[i];
        if(sum<=x){
            ans = max(ans,sum);
        }
    }
    cout << ans << endl;
}

int main()
{
    int arr[]={1,4,45,6,10,19};
    int k=3;
    int x = 20;
    int n = 7;
    minsumsub(arr,k,x,n);


    return 0;
}
