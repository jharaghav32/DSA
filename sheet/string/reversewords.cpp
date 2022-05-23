// problem Link:https://leetcode.com/problems/reverse-words-in-a-string/submissions/
// string reverseWords(string s) {
//         int n =s.size();
//         string res="";
//         stack<string> ans;
//         for(int i=0;i<n;i++){
//             if(s[i]==' '){
//                 if(res.size())ans.push(res);
//                 res="";
//             }
//             else{
//                 res+=s[i];
//             }
//         }
//         if(res.size()){
//             ans.push(res);
//             res="";
            
//         }
        
//         while(!ans.empty()){
//             if(ans.size()==1)
//                 res+= ans.top();
//             else
//             res += ans.top()+" ";
//             ans.pop();
//         }
//         return res;
// }