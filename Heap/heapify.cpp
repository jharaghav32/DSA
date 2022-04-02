#include <bits/stdc++.h>
using namespace std;

// eska time complexity is O(n)
void heapify(int arr[],int n, int i){
    int larg = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if(left<n && arr[left]>arr[larg]){
        larg=left;
    }
     if(left<n && arr[right]>arr[larg]){
        larg=right;
    }
    if(larg != i){
        swap(arr[i],arr[larg]);
        heapify(arr,n,larg);
    }
}

int main()
{
    int arr[]={20,10,30,5,50,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=(n-1)/2;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
