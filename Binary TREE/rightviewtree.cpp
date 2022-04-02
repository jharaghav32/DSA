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
void rightview(struct node* root){
    if(root==NULL){
        return;
    }
queue <struct node*> q;
q.push(root);

 while(!q.empty()){

    int n=q.size();
   for(int i=0;i<n;i++){
    struct node* element= q.front();
    q.pop();
    if(i==n-1){
        cout<<element->data<<" ";
    }
    if(element->left){
        q.push(element->left);
    }
    if(element->right){
        q.push(element->right);
    }
   }


 }
}




int main(){

 struct node* root= new node(1);
   root->left= new node(2);
   root->right= new node(3);
   root->left->left= new node(4);
   root->left->right= new node(5);
   root->right->left=new node(6);
   root->right->right=new node(7);

 rightview(root);

return 0;

}
