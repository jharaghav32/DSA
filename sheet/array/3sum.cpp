// problem link: https://leetcode.com/problems/3sum/submissions/

// Here we have to determine the unique templates whose sum is equal to zero 
// so we use here the two pointer approach first of all we sort the array 
//make one element as fixed and ponints the low pointer next to fixed element and high to last element
//then we traverse and find the value of low + high sum equal to negative of fixed elemnt 
// then only it will be equal to zero 
// if it is less than the required value we increase the low pointer as the array is sorted and we only get the
// increase value if we increase the low pointer 
// similarily if we get more than the required value we decrease the high pointer 
// loop will terminate when low>= high
// if we get the required sum insert the values into vector 
// and escape all those element which is equal to previously low and high because if we take
// those then we didn't get unique one as array is sorted so escape till next element is not equal
// to previos one
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;      
        
        
        
        for(int i=0;i<n-2;i++){
            int low =i+1;
            int high =n-1;
            int pivot = nums[i];
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
            while(low<high){
                if(nums[low]+nums[high]== -pivot){
                    vector<int> temp;
                    temp.push_back(pivot);
                    temp.push_back(nums[low]);
                    temp.push_back(nums[high]);
                    ans.push_back(temp);
                    
                    while(low<high && nums[low]==nums[low+1])low++;
                    while(low<high && nums[high]==nums[high-1])high--;
                    
                    low++;
                    high--;
                }
                else if(nums[low]+nums[high]<(-pivot))
                    low++;
                else
                    high--;
            }
            }
        }
        return ans;
    }
};