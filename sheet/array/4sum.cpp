// problem link:https://leetcode.com/problems/4sum/submissions/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-3;i++){

            
            for(int j=i+1;j<n-2;j++){
                
                int sum =nums[i]+nums[j];
                int low = j+1;
                int high=n-1;
                while(low<high){
                    if(nums[low]+nums[high]==target-sum){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        ans.push_back(temp);
                        while(low<high && nums[low]==nums[low+1])low++;
                        while(low<high && nums[high]==nums[high-1])high--;
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<target-sum)
                        low++;
                    else
                        high--;
                }
                while(j+1<n-2 && nums[j]==nums[j+1])j++;
                
            }
            while(i+1<n-3 && nums[i]==nums[i+1])i++;  // here we move to j to last same element after
            // that for loop increment the j to next different element
            // 2 2 2 3
            // on doing operation i points to last element 2 because after that 2!=3
            // and then for loop increment i to 3 and in this case we get new element
            }
        
        return ans;
    }
};