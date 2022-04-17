// problem link:https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

#include<bits/stdc++.h>
using namespace std;
int main(){

return 0;
}
void rotate(int arr[], int n)
{
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=last;

}
