#include<bits/stdc++.h>
using namespace std;
int t[1001][1001];
void lcs(string &x,string &y,int m,int n){
 
            for(int i=0;i<=m;i++){
                for(int j=0;j<=n;j++){
                    if(i==0 || j==0)
            t[i][j]=0;
                   else if(x[i-1]==y[j-1])
             t[i][j]=t[i-1][j-1]+1;
        else
             t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
            }
      
       
}
int main(){
string x="AGGTAB";
string y="GXTXAYB";
lcs(x,y,x.length(),y.length());
int i=x.length();
int j= y.length();
string s = " ";
while(i>0 && j>0){
    if(x[i-1]==y[j-1]){
s.push_back(x[i-1]);
i--;
j--;
    }
    else{
        if(t[i-1][j]>t[i][j-1])
        i--;
        else
        j--;
    }
}
reverse(s.begin(),s.end());
cout<<s;
return 0;
}
