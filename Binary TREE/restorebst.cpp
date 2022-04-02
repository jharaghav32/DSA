#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node* left, *right;
node(int val){
data=val;
left=NULL;
right=NULL;
}
};
void swap (int* a, int* b){
int temp;
temp=*a;
*a=*b;
*b=temp;

}
void calcpointer(node* root, node** first ,node** mid ,node** last, node** prev){
 if(root==NULL)
 return;


 calcpointer(root->left,first,mid,last,prev);
 // case 1 if rule voilate first time
 if(*prev && root->data< (*prev)->data)   {
        if(!*first){
    *first=*prev;
    *mid=root;
        }

 else{
    *last=root;
 }
 }
 *prev = root;
 calcpointer(root->right,first,mid,last,prev);

}

void inorder(node* root){
if(root == NULL)
    return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);

}
void recoverbst(node* root){
node* first, *mid , * prev ,*last;
first=prev=mid=last=NULL;
calcpointer(root,&first,&mid,&last,&prev);
 //case 1 : if swapped element are not adjacent
 if(first&& last){
    swap(&(first->data),&(last->data));
 }
 // case 2: if swapped element are adjacent
 else if(first && mid){
    swap(&(first->data),&(mid->data));
 }

}

int main(){

node* root = new node(10);
root->right=new node(8);
root->left=new node(5);
root->left->left=new node(2);
root->left->right=new node(20);
cout<<"\n input tree is "<<endl;
inorder(root);
recoverbst(root);
cout<<"\n output tree is "<<endl;
inorder(root);







return 0;
}
