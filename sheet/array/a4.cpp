// problem link:https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

#include<bits/stdc++.h>
using namespace std;
int main(){

return 0;
}
int doUnion(int a[], int n, int b[], int m)  {
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            s.insert(b[i]);
        }
        return s.size();
    }