#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;                               // jab ham false return krte hai tb comparator swap kr deta hai 
}
int main(){
    int arr[]={2,4,9,25,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,cmp);
    for(auto i : arr){
        cout<< i<<" ";
    }
return 0;
}