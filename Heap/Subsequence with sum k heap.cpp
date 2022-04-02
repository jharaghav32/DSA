#include <bits/stdc++.h>
using namespace std;

int main()
{
      int sum=0,count=0;
    priority_queue<int,vector<int>> q;
    int arr[]={1,1,3,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++){
        q.push(arr[i]);
    }
    int k = 10;
    while(!q.empty()){
        sum = sum + q.top();
        q.pop();

        count++;
        if(sum>=k){

            break;
        }
    }
    if(sum<k)
    cout<<"-1";
    else
    cout<<count;

    return 0;
}
