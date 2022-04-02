#include <iostream>
using namespace std;

struct node{
int data;
struct node* left;
struct node* right;

node(int value){
data = value;
left = NULL;
right = NULL;
}
};

struct node* findmin(struct node* nodes){
    struct node* curr = nodes;
    while(curr->left != NULL && curr != NULL){
        curr = curr->left;
    }
    return curr;

}
struct node* deletebst(struct node* root,int value){
    if(root==NULL) return root;
    else if(root->data<value) root->right = deletebst(root->right,value);
    else if(root->data>value)root->left = deletebst(root->left,value);
    else{
        if(root->left == NULL && root->right ==NULL){
            struct node* temp = root;
            free(root);
            root = NULL;
            return root;

        }
      else  if(root->left == NULL){
           struct node* temp = root->right;
           free(root);
           return temp;


       }
        else if(root->right == NULL){
           struct node* temp = root->left;
           free(root);
           return temp;

       }

           struct node* temp = findmin(root->right);
           root->data = temp->data;
           root->right = deletebst(root->right,temp->data);

       }
       return root;
    }

struct node* insertbst(struct node* root,int value){

    if(root==NULL){
        struct node* newnode = new node(value);
        return newnode;
    }
if(root->data < value){
    root->right = insertbst(root->right,value);
}
else{
    root->left= insertbst(root->left,value);
}
return root;
}
void inorder(struct node* root){
 if(root==NULL){
    return;
 }
    inorder(root->left);
  cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    struct node* root = new node(5);
    root->left= new node(1);
    root->right = new node(7);
    root->left->right=new node(3);
    root->left->right->right= new node(4);
    root->left->right->left= new node(2);

inorder(root);
root= deletebst(root,3);
inorder(root);

return 0;
}
