#include <bits/stdc++.h>
using namespace std;
int findpivot(int arr[],int left,int right){
    if(left>right)
    return -1;
    if(left==right)
    return left;
    int mid = left+right/2;
    if(mid<right && arr[mid]>arr[mid+1])
    return mid;
    if(left<mid && arr[mid-1]>arr[mid])
    return mid-1;
    if(arr[left]>=arr[mid])
    return findpivot(arr,mid+1,right);
    else
    return findpivot(arr,left,mid-1);
}
int binarysearch(int arr[],int left,int right,int key){
    int pivot = findpivot(arr,left,right);
    if(arr[pivot]==key)
    return pivot;
    if(arr[0]<=key)
    return binarysearch(arr,0,pivot-1,key);
    else
    return binarysearch(arr,pivot+1,4,key);
}

int main()
{
    int arr[]={30,40,50,10,20};
    int ans = binarysearch(arr,0,4,50);

    cout << ans<<endl;


    return 0;
}
