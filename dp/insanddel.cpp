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
    //    heap        pea
    //      \         /
    //       \       /
    //        \     /
    //           ea(longest subsequence)
       
}
int main(){
 string x = "heap";
 string y= "pea";
 lcs(x,y,x.length(),y.length());
 int m = x.length();
 int n = y.length();
 cout<<"NO of deletion is : "<<(m-t[m][n])<<endl;
 cout<<"NO of insertion  is : "<<(n-t[m][n]);
return 0;
}