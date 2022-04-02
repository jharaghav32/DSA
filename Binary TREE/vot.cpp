#include<bits/stdc++.h>
using namespace std;

map<int,vector<int>> mp;

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
void vot(int hd,node* root){
    if(root==NULL)return;
    mp[hd].push_back(root->data);
    if(root->left)
    vot(hd-1,root->left);
    if(root->right)
    vot(hd+1,root->right);
}
int main(){
    vector<vector<int>> v;
node* root = new node(3);
root->left = new node(9);
root->right = new node(20);
root->right->left = new node(15);
root->right->right = new node(7);
vot(0,root);
for(auto it:mp){
    vector<int> level;
    for(int i=0;i<it.second.size();i++){
        level.push_back(it.second[i]);
    }
    v.push_back(level);
}
return 0;
}