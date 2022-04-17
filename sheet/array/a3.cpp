// problem link:https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

#include<bits/stdc++.h>
using namespace std;
int main(){
// encrypted code
return 0;
}
 int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = l;i<=r;i++){
            pq.push(arr[i]);
        }
        for(int i=1;i<k;i++){
            pq.pop();
        }
        return pq.top();
    }