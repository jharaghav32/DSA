// moores voting algorithm code
// here we find to majority element in an array which occurs more than n/2 times
// here we count the element and after every time if we get different element we
// decrement the count and increment the count of next element after traversing 
// if majority element exist then we get minimum 1 count
#include<bits/stdc++.h>
using namespace std;

    int majorityElement(vector<int>& nums) {
       int index=0;
        int n =nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[index]==nums[i])
                count++;
            else
                count--;   // tc is O(n) and space is O(1);
            if(count==0){
                index=i;
                count=1;
            }
        }
        // check if element of index is actually repeating more than n/2 while traversing and measu
        // ring the frequency
        return nums[index];
        
    }
int main(){
    vector<int>nums={1,1,2,2,3,1};
    cout<<majorityElement(nums);
    return 0;

}
