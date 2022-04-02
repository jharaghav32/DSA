#include<bits/stdc++.h>
using namespace std;
// memoisation ke case me ham dekhte hai ki input jo variable change ho rha hai uska matrix banayenga
// to yaha pe wt and size baar baar change ho rhe hai esliye ham ke 2d array bnayengae of size and wt.
//size of matrix n+1 && w+1 lenge yaha generally 10 le liya
int t[10][10];
// int knapsack(vector<int> &wt,vector<int>&val,int w,int n){
//     if(t[w][n]!=-1)return t[w][n];
//     if(w==0 || n==0) return t[w][n]=0;
                                                                    
   
//         if(w-wt[n-1]>=0){
//            return t[w][n]=max(knapsack(wt,val,w,n-1) ,knapsack(wt,val,w-wt[n-1],n-1)+val[n-1] );
//         }
//       return  t[w][n]=knapsack(wt,val,w,n-1);
    

// }
// int main(){
//     memset(t,-1,sizeof(t));
// vector<int> wt ={1,3,4,5};
// vector<int> val={1,4,5,7};
// int n = val.size();
// int w = 7;
// cout<<knapsack(wt,val,w,n);
// return 0;
// }

// bottom up  tabulation approach
int knapsack(vector<int>&wt,vector<int>&val,int w,int n){

                                                // from recursive solution change w into j and n into i and make a loop 
 for(int i=0;i<=n;i++){
     for(int j=0;j<=w;j++){
         if(i==0||j==0) t[i][j]=0;
         else if(j>=wt[i-1])
       t[i][j]=  max(t[i-1][j],t[i-1][j-wt[i-1]]+val[i-1]);
       else
       t[i][j]=t[i-1][j];
     }
 }
     return t[n][w];
}
int main(){

vector<int> wt ={1,3,4,5};
vector<int> val={1,4,5,7};
int n = val.size();
int w = 7;
cout<<knapsack(wt,val,w,n);

return 0;
}