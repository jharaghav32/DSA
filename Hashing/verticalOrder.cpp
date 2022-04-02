#include <bits/stdc++.h>
using namespace std;


struct node {
    int data;
    struct node* left ,*right;
    
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void getVertical(struct node* root,int hd,map<int,vector<int>> &mp){
    if(root == NULL)
    return;
    mp[hd].push_back(root->data);
    getVertical(root->left,hd-1,mp);
    getVertical(root->right,hd+1,mp);
}

int main()
{
     struct node* root = new node(10);
     root->left = new node(7);
     root->right = new node(4);
     root->left->left = new node(3);
     root->left->right = new node(11);
     root->right->left = new node(14);
     root->right->right = new node(6);
     map<int,vector<int>> mp;
     int hd=0 ;
     
     getVertical(root,hd,mp);
     for(auto i : mp){
         for(int k = 0;k<(i.second).size();k++){
             cout<<(i.second)[k]<<" ";
         }
         cout<<endl;
     }
    return 0;
}
