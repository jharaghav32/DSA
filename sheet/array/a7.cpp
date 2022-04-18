// problem link:https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1

#include<bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m) {
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a1[i]);
    }
    for(int i=0;i<m;i++){
        if(s.find(a2[i])==s.end())
        return "No";
    }
    return "Yes";
}
int main(){
int a1[]={1,2,3};
int a2[]={2,3};
cout<<isSubset(a1,a2,3,2);
return 0;
}
