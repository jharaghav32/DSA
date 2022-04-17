// problem link:https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
#include<bits/stdc++.h>
using namespace std;
pair<long long, long long> getMinMax(long long a[], int n) {
    long long minimum =INT_MAX;
    long long maximum = INT_MIN;
    pair<long long ,long long > ans;
    for(long long i=0;i<n;i++){
        minimum = min(minimum,a[i]);
        maximum = max(maximum,a[i]);
    }
    ans.first=minimum;
    ans.second=maximum;
    return ans;
}