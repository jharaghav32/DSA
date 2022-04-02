#include<bits/stdc++.h>
using namespace std;

struct node{
int value;
struct node* left;
struct node* right;
  node(int val){
value = val;
left=NULL;
right=NULL;
}

};
struct info{
int mini;
int maxi;
int sizee;
int ans;
bool isbst;


};
info largestbst( struct node* root){
if(root==NULL){
    return {INT_MAX,INT_MIN,0,0,true};
}
if(root->left == NULL && root->right==NULL){
    return {root->value,root->value,1,1,true};
}
info rootleft=largestbst(root->left);
info rootright=largestbst(root->right);
info curr;
curr.sizee=(1+rootleft.sizee+rootright.sizee);
if(rootleft.isbst && rootright.isbst && root->value>rootleft.maxi && root->value<rootright.mini){
    curr.mini= min(root->value,min(rootright.mini,rootleft.mini));
    curr.maxi= min(root->value,min(rootright.maxi,rootleft.maxi));
    curr.ans=curr.sizee;
    curr.isbst=true;
    return curr;
}
curr.ans= max(rootright.ans,rootleft.ans);
curr.isbst=false;
return curr;


}

int main(){

node * root = new node(1);
root->right = new node(6);
root->left = new node(3);
root->left->right=new node(4);
root->left->left=new node(2);
info currr=largestbst(root);
cout<<currr.ans<<endl;



return 0;

}
