// problem link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         int mini =INT_MAX;
//         int maxi = INT_MIN;
//         for(int i=0;i<n;i++){
//             mini=min(mini,prices[i]);
//             maxi=max(maxi,prices[i]-mini);
//         }
//         return maxi;
//     }
// };