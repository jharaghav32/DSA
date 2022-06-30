// // Problem Link:https://www.geeksforgeeks.org/maximum-size-rectangle-binary-sub-matrix-1s/
// // here we have to find the maximum size of rectangale from   a binary matrix which only contains element 1
// class Solution {
// public:
//     int histogram(vector<int>&v){
//         int n = v.size();
//         vector<int>ps(n);
//         vector<int>ns(n);
//         stack<int>st;
//         stack<int>st1;
        
//         for(int i=0;i<n;i++){
//             while(!st.empty() && v[st.top()]>=v[i]){
                
//                     st.pop();
                
//             }
//             if(st.empty())
//                 ps[i]=-1;
//             else
//                 ps[i]=st.top();
//             st.push(i);
//         }
//         for(int i=n-1;i>=0;i--){
//             while(!st1.empty()&& v[st1.top()]>=v[i]){
//                 st1.pop();
//             }
//             if(st1.empty())
//                 ns[i]=n;
//             else
//                 ns[i]=st1.top();
//             st1.push(i);
//         }
//         int ans = INT_MIN;
//         for(int i=0;i<n;i++){
//             ans = max(ans,(ns[i]-ps[i]-1)*v[i]);
//         }
//         return ans;
//     }
//     int maximalRectangle(vector<vector<char>>& matrix) {
//         vector<int>v;
//         for(int i=0;i<matrix[0].size();i++){
//             v.push_back(matrix[0][i]-48);
//         }
//         int currentans = histogram(v);
//         for(int i=1;i<matrix.size();i++){
//             for(int j=0;j<matrix[0].size();j++){
//                 if(matrix[i][j]=='0')
//                     v[j]=0;
//                 else
//                     v[j]=v[j]+1;
//             }
//             currentans = max(currentans,histogram(v));
//         }
//        return currentans; 
//     }
// };