// problem : to find the next permutation of an array 
// solution 1: we can do this by using stl function by directly applying next_permutation(nums.begin(),nums.end());
// algorithm
// 1. first traverse from last and find the element which is greater than its next element
// 2. Now find the first element from last which is greater than the element found
// 3. swap these two element 
// 4.Now reverse the array from the index after the element found index
// In this way we got our next permutation
// IN case no such element are found It means that element are in descending order
// And nextpermutation of it is ascending order so simply reverse it

#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>& nums, int start, int end)
    {
        
        while(start<end)
        {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
        return;
    }
 void nextPermutation(vector<int>& nums) {
        
        int ind1=-1;
        int n = nums.size();
        
        for(int i=n-2;i>=0;i--)
        {
            
            if(nums[i]<nums[i+1])
            {
                ind1=i;
                break;
            }
            
        }
        if(ind1==-1)
        {
            reverse(nums, 0, n-1);
            return;
        }
        
        int ind2= -1, ele=INT_MAX;
        
        
        for(int i=n-1;i>ind1;i--)
        {
            if(nums[i]>nums[ind1] )
            {
                
                ind2=i;
                break;
            }
        }
        
        swap(nums[ind1], nums[ind2]);
        
        reverse(nums, ind1+1, n-1);
        return;
    }
int main(){
vector<int> nums={1,3,2};
nextPermutation(nums);
// printing next permutation
for(int i=0;i<3;i++)
cout<<nums[i]<<" ";
return 0;
}