 // problem link:https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/submissions/
 // here we use the sliding window technique 
 // class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int n =cardPoints.size();
//         int ans=INT_MIN; // here we use the sliding window technique
       // first of all i added the last k elements of the array and then adding one element
       // from the beginning and removing one from last as we do in sliding window 
       // and at every step we take max of it and then return ans;
//         int sum=0;
//         for(int i=n-k;i<=n-1;i++){
//             sum += cardPoints[i];
//         }
//         ans=max(ans,sum);
//         int l=0;
//         int r=n-k;
//         while(r<n){
            
//             sum = sum -cardPoints[r++]+cardPoints[l++];
//             ans=max(ans,sum);
//         }
//         return ans;
        
//     }
// };