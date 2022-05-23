// problem link:https://leetcode.com/problems/simplify-path/submissions/

//  string simplifyPath(string path) {
//         int n = path.size();
      
//         string can = "";
//         stack<string> st;
//        for(int i=0;i<n;i++){
//            if(path[i]=='/'){
//                if(can == ".."){
//                    if(!st.empty())st.pop();
//                }
//                    else if(can!="." && can!="")
//                        st.push(can);
//                    can="";
               
//            }
//            else{
//                can+= path[i];
//            }
//        }
//         if(can==".."){
//             if(!st.empty())st.pop();
//             can="";
//         }
//         else{
//             if(can!="." && can!="")
//                 st.push(can);
//             can="";
//         }
    
//         if(st.empty())
//             return "/";
        
//         while(!st.empty()){
//            if(st.top()!="/"){
//                can = st.top()+can;
//                st.pop();
//                st.push("/");
//            }
//             else{
//                 can = st.top()+can;
//                 st.pop();
//             }
//         }
        
//         return can;
//     }