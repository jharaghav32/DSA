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
 if(root==NULL  ){

    return;
 }


    inorder(root->left);
  cout<<root->data<<" ";
    inorder(root->right);



}

int main(){
    int arr[]={5,1,3,4,2,7};
    struct node* root = new node(arr[0]);
    for(int i = 1;i<6;i++){
   root =  insertbst(root,arr[i]);
    }


inorder(root);

return 0;
}
