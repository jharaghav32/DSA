// problem link:https://leetcode.com/problems/trapping-rain-water/

// pani on kisi bhi block pe tabhi store hoga jab agar usse left wala and rt wale block ki height 
// usse jyada hogi

#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> nums ={3,1,2,4,0,1,3,2};
int n = nums.size();
vector<int>left(n);
vector<int>right(n);

int leftmax=INT_MIN;
int rightmax=INT_MIN;
for(int i=0;i<n;i++){
 leftmax=max(leftmax,nums[i]);
 left[i]=leftmax;
}
for(int i=n-1;i>=0;i--){
 rightmax=max(rightmax,nums[i]);
 right[i]=rightmax;
}
int sum =0;
for(int i=0;i<n;i++){
    int ans = (min(left[i],right[i])-nums[i]);
    if(ans>0)
sum = sum + ans;
}
cout<<"this is answer : "<<sum;
return 0;
}