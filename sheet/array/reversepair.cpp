// problem link:https://leetcode.com/problems/reverse-pairs/
// class Solution {
// public:
//     int merge(vector<int> &nums,int low,int mid,int high){
//        int count=0;
//         int j = mid+1;
//         for(int i=low;i<=mid;i++){
//             while(j<=high && nums[i]> 2LL * nums[j]){
//                 j++;
//             }
//             count += (j-(mid+1));
//         }
//         vector<int>a;
//         int right = mid+1;
//         int left=low;
//         while(left<=mid && right<=high){
//             if(nums[left]<=nums[right])
//                 a.push_back(nums[left++]);
//             else
//                 a.push_back(nums[right++]);
//         }
//         while(left<=mid)
//            { a.push_back(nums[left++]);}
//         while(right<=high)
//           {  a.push_back(nums[right++]);}
//         for(int i=low;i<=high;i++){
//             nums[i]=a[i-low];
//         }
//         return count;
//     }
//     int mergesort(vector<int>&nums,int low,int high){
//      if(low>=high)return 0;
//         int mid = (low+high)/2;
//         int count;
//         count = mergesort(nums,low,mid);
//         count += mergesort(nums,mid+1,high);
//         count += merge(nums,low,mid,high);
        
//         return count;
//     }
//     int reversePairs(vector<int>& nums) {
        
//         return mergesort(nums,0,nums.size()-1);
//     }
// };