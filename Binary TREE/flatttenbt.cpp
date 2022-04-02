#include "bits/stdc++.h"
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int value){
    data=value;
    left=NULL;
    right=NULL;
    }
};
void preorder(struct node* root){
 if(root==NULL){
    return;
 }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);


}

struct node* flatten(struct node* root){

if(root==NULL){
    return NULL;
}
struct node* lefthead=flatten(root->left);
struct node* righthead=flatten(root->right);
root->right=lefthead;
root->left=NULL;
struct node* temp=root;
while(temp->right != NULL){
    temp=temp->right;
}
temp->right=righthead;
temp->left=NULL;

return root;

}

int main(){

struct node* root= new node(1);
   root->left= new node(2);
   root->right= new node(3);
   root->left->left= new node(4);
   root->left->right= new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);

cout<<"before flattening"<<endl;
preorder(root);

struct node* flattenedroot=flatten(root);
cout<<"after flattening"<<endl;
preorder(flattenedroot);






return 0;
}
