// problem link:https://leetcode.com/problems/merge-sorted-array/submissions/
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//     if ( n == 0 ) return ;  
//         if ( m == 0 ){
//             nums1 = nums2;
//             return;
//         } 
		
//         vector<int> res;
//         int  i=0,j=0;
        
//         for( ;i<m && j<n ; ){         
//             if(nums1[i]<=nums2[j]){
//                res.push_back(nums1[i]);
//                 ++i;
//             }
//             else{
//                  res.push_back(nums2[j]);
//                  ++j;
//             }            
//         }
        

//         while(j!=n){
//                 res.push_back(nums2[j++]);
//         }
//         while(i!=m){
//                 res.push_back(nums1[i++]);
//         }
		
//         nums1 = res;        
//     }
// };




/// second approach 


/// first put the element of nums2 in nums1 and then sort it tc is O(n+m)logn+n