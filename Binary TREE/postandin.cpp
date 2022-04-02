#include "bits/stdc++.h"
using namespace std;

class node{
    public:
    int data;
    struct node* left;
    struct node* right;
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
int search(int ino[],int start,int end,int val){
    for(int i=start;i<end;i++){
        if(ino[i]==val){
            return i;
        }
    }
    return -1;
}
node* buildtree(int post[],int ino[],int start,int end){
static int indx=6;
if(start>end){
    return NULL;
}
int val=post[indx];
indx--;
node* curr= new node(val);
if(start==end){
    return curr;
}
int pos= search(ino,start,end,val);
curr->right= buildtree(post,ino,pos+1,end);
curr->left= buildtree(post,ino,start,pos-1);
return curr;

}

int main(){

  int post[]={4,5,2,6,7,3,1};
  int ino[]={4,2,5,1,6,3,7};
  node* root= buildtree(post,ino,0,6);
 inorder(root);

return 0;

}
