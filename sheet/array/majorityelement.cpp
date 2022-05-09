// problem link:https://leetcode.com/problems/majority-element/submissions/

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++;
//         }
//         int freqmax=INT_MIN;
//         int element;
//         for(auto i:mp){
//             if(freqmax<i.second){
//                 element=i.first;
//                 freqmax=i.second;
//             }
//         }
//         return element;
//     }
// };