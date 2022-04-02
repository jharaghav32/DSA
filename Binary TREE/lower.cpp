#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    vector<int> v(n);
    for(auto i : v){
        cin>>i;
    }
    int q;
    cin>>q;
    while(q--){
        int y;
        cin>>y;
        
        auto it = lower_bound(v.begin(),v.end(),y);
        if(*it == y){
            cout<<"Yes"<<" "<< (it - v.begin() + 1)<<endl;
        }
        else {
        cout<<"No"<<" "<<(it - v.begin() + 1)<<endl;
        }
        
    }
    return 0;
}