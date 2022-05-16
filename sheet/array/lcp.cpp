// Problem Link:https://leetcode.com/problems/longest-common-prefix/
//LONGEST COMMON PREFIX

// string longestCommonPrefix(vector<string>& strs) {
//         if(strs.size()==1)
//             return strs[0];
//         int mini=INT_MAX;
//         bool flag;
//         string res="";
//         for(int i=0;i<strs.size();i++){
//             if(strs[i].size()<mini)
//                 mini=strs[i].size();
//         }
//         for(int i=0;i<mini;i++){
//             char val=strs[0][i];
//             for(int j=1;j<strs.size();j++){
//                 if(val==strs[j][i]){
//                     flag=true;
//                 }
//                 else{
//                    flag=false; 
//                     break;
//                 }
//             }
//             if(flag)
//                 res+=val;
//             else
//                 return res;
//         }
//         return res;
//     }