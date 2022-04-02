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
void leveltrave(struct node* root){
queue <struct node*> q;
q.push(root);
q.push(NULL);
 while(!q.empty()){
    struct node* element= q.front();
    q.pop();
    if(element != NULL){
        cout<<element->data<<" ";

    if(element->left)
        q.push(element->left);
    if(element->right)
        q.push(element->right);
    }
    else if(!q.empty())
        q.push(element);



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

 leveltrave(root);

return 0;

}
