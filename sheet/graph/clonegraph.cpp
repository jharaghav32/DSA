// // problem link:https://leetcode.com/problems/clone-graph/


// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     vector<Node*> neighbors;
//     Node() {
//         val = 0;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val) {
//         val = _val;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val, vector<Node*> _neighbors) {
//         val = _val;
//         neighbors = _neighbors;
//     }
// };
// */

// class Solution {
// public:
//     Node* dfs(Node*node,unordered_map<Node*,Node*>&ump){
//         vector<Node*>neighbor;
//         Node* newnode = new Node(node->val);
//         ump[node]=newnode;
//         for(auto i:node->neighbors){
//             if(ump.find(i)!=ump.end())
//                 neighbor.push_back(ump[i]);
//             else
//             neighbor.push_back(dfs(i,ump));
//         }
//         newnode->neighbors=neighbor;
//         return newnode;
//     }
//     Node* cloneGraph(Node* node) {
//         unordered_map<Node*,Node*>ump;
//         if(node==NULL)return NULL;
//         return dfs(node,ump);
//     }
// };