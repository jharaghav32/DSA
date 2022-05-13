// problem link:https://leetcode.com/problems/largest-rectangle-in-histogram/

// brute force approach tc -(O(n^2))
//  int largestRectangleArea(vector<int>& heights) {
//         int ans=INT_MIN;
//         int n = heights.size();
//         for(int i=0;i<n;i++){
//         int left=i;
//         int right=i;
//         while(heights[left]>=heights[i]&&left>0)
//             left--;
//             while(heights[right]>=heights[i]&& right<n)
//                 right++;
//             int mini = (right-left-1)*heights[i];
//         ans = max(ans,mini);
//         }
//         return ans;
//     }

// Optimised approach using stack
// class Solution {
// public:
    
//     int largestRectangleArea(vector<int>& heights) {
//        int n =heights.size();
//         vector<int> prev(n);
//           stack<int> ps;
//         for(int i=0;i<n;i++){
          
//             while(!ps.empty()&& heights[ps.top()]>=heights[i]){
//                 ps.pop();
//             }
//             if(ps.empty())
//                 prev[i]=-1;
//             else
//                 prev[i]=ps.top();
//             ps.push(i);
//         }
//         vector<int> next(n);
//          stack<int> ns;
//         for(int i=n-1;i>=0;i--){
           
//             while(!ns.empty()&& heights[ns.top()]>=heights[i]){
//                 ns.pop();
//             }
//             if(ns.empty())
//                 next[i]=n;
//             else
//                 next[i]=ns.top();
//             ns.push(i);
//         }
//         int maxi=INT_MIN;
//         for(int i=0;i<n;i++){
//             int ans =(next[i]-prev[i]-1)*heights[i];
//             maxi=max(maxi,ans);
//         }
//        return maxi;
//     }
// };