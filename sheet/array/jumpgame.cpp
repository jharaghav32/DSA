// problem link:https://leetcode.com/problems/jump-game/submissions/
class Solution {
public:
    
//     bool canJump(vector<int>& nums) {
//         int n = nums.size();
//         int maxi=0;
//         if(n==1)
//             return true;
//         if(nums[0]==0)
//             return false;
//         for(int i=0;i<n-1;i++){
//             if(nums[i]==0){
//                 if(i==maxi)
//                     return false;
//             }
//             maxi=max(i+nums[i],maxi);
//         }
//         if(maxi>=n-1)
//             return true;
//         else
//             return false;
//     }
// };