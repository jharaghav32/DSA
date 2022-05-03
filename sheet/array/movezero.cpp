// problem link : https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> newve;
        int n = nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
            }
            else{
                nums.push_back(nums[i]);
            }
        }
        nums.erase(nums.begin(),nums.begin()+n);
        while(count--){
            nums.push_back(0);
        }
    }
};