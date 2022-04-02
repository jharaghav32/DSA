#include<bits/stdc++.h>
using namespace std;
int main()
{
    // By default priority queue create a maxheap in c++
    // But we can also create a minheap using following syntax :   priority_queue <int, vector<int>, greater<int>> pq;
    int cost =0;
    int arr[]={2,5,4,8,6,9};
    priority_queue<int> pq;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        pq.push(-(arr[i]));
    }

    while(pq.size()>1){
    int a = -(pq.top());
    pq.pop();
    int b = -(pq.top());
    pq.pop();
    cost = cost + (a+b);
    pq.push(-(a+b));
}
cout<<cost;
    return 0;
}
