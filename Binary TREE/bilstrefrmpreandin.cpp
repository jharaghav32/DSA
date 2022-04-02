#include "bits/stdc++.h"
using namespace std;

class node{
public :
    int data;
    node* left;
    node* right;
    node(int value){
    data=value;
    left=NULL;
    right=NULL;

    }


};
void inorder( node* root){
 if(root==NULL  ){

    return;
 }


    inorder(root->left);
  cout<<root->data<<" ";
    inorder(root->right);



}
int search(int ino[],int start,int end,int curr){
for(int i=start;i<=end;i++){
    if(ino[i]==curr){
        return i;
    }
}
return -1;

}
node* buildtree(int pre[],int ino[],int start,int end){
static int ind=0;
if(start>end){
    return NULL;
}
int curr=pre[ind];
ind++;
node* newnode=new node(curr);
if(start==end){
    return newnode;
}
int pos = search(ino,start,end,curr);

newnode->left=buildtree(pre,ino,start,pos-1);
newnode->right=buildtree(pre,ino,pos+1,end);
return newnode;

}
int main(){

    int pre[]={1,2,4,5,3,6,7};
    int ino[]={4,2,5,1,6,3,7};
    node* root = buildtree(pre,ino,0,4);


    inorder(root);
return 0;
}
