

#include<bits/stdc++.h>
using namespace std;

void findpeak(int arr[],int left,int right){
if(left>right)
    return ;
int mid = left + (right-left) /2;
if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]){
    cout<< "peak element is : "<<arr[mid] << endl;
}


     findpeak(arr,left,mid-1);
    findpeak(arr,mid+1,right);



}

int main(){
int arr[]={1,2,3,5,4,7,8,9};

findpeak(arr,0,7);

return 0;
}
