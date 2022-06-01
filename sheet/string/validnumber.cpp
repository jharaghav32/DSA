 // problem Link:https://leetcode.com/problems/valid-number/submissions/
 #include<bits/stdc++.h>
 using namespace std;
 
 
 
 
 bool isNumber(string s) {
        int n = s.size();
        bool digit=false;
        bool exp=false;
        bool sign=false;
        bool dec=false;
        int indexsign;
        int indexe;
        if(n==1){
            if(s[0]=='.'||s[0]=='+'||s[0]=='-')return false;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                if(dec)return false;
                if(exp)return false;
                
                dec=true;
            }
            else if(s[i]=='e'||s[i]=='E'){
                if(exp)return false;
                if(!digit)return false;
                if(i==n-1)return false;
                exp=true;
                indexe=i;
            }
            else if(s[i]=='+'||s[i]=='-'){
                if(i==n-1)return false;
                if(i!=0){
                    if(!(exp && indexe+1==i)) return false;
                } 
                digit=false;
            }
            else if((int)s[i]>=48 && (int)s[i]<=57)
                digit = true;
            else
                return false;
        }
        return digit;
    }


    int main(){
        string s;
        cin>>s;
        if(isNumber(s))cout<<"YES\n";
        else cout<<"NO\n";
    }