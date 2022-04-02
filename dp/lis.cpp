#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int arr[10];

int lis(int i){
        int ans = 1;
    for(int j=0;j<i;j++){
        if(arr[i]>arr[j]){
            ans = max(ans,lis(j)+1);
        }
    }
    return ans;
}

int main()
{
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int n = 10;
  int ans =0;
    for(int i=0;i<n;i++){
        ans = max(ans,lis(i));
    }

    return 0;
}
