#include <bits/stdc++.h>
using namespace std;
void minsumsub(int arr[],int x,int n){
    int sum = 0, k = INT_MAX , siz;
    int i = 0;
    while(i<n){
        sum = sum +arr[i];
        siz = i+1;
        if(sum>x){
        k = min(k,siz);
        sum = sum - arr[i+1-k];
        siz = siz -1;

        if(sum>x){
            k = min(k,siz);
        }
        }
        i++;

    }
    cout<< k<<endl;
}

int main()
{
    int arr[]={1,4,45,6,10,19};

    int x = 51;
    int n = 6;
    minsumsub(arr,x,n);


    return 0;
}
