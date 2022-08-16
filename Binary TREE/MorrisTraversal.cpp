#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};
void morris(Node* root){
    Node* curr = root;
    vector<int>inorder;
    while(curr!=NULL){
    if(curr->left==NULL){
        inorder.push_back(curr->val);
        curr = curr->right;
    }
    else{
        Node* prev = curr->left;
        while(prev->right && prev->right!=curr){
            prev =prev->right;
        }
        if(prev->right!=NULL){
            prev->right=NULL;
            inorder.push_back(curr->val);
            curr=curr->right;
        }
        else{
            prev->right=curr;
            curr=curr->left;
        }
    }
    }
    cout<<"Inorder Traversal  is :  \n";
    for(auto i:inorder){
        cout<<i<<" ";
    }
}


int main(){
Node* root = new Node(5);
root->left=new Node(6);
root->right= new Node(7);
root->left->left=new Node(8);
root->left->right = new Node(9);
morris(root);






    return 0;
}