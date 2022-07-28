// class Node{
//     public:
//     Node*links[26];
//     int ew;
//     int cp;
//     Node(){
//         for(int i=0;i<26;i++){
//             links[i]=NULL;
//         }
//         ew=0;
//         cp=0;
//     }
// };

// class Trie{

//     public:
//     Node* root;
//     Trie(){
//         root = new Node();
//     }

//     void insert(string &word){
//         Node* node = root;
//         for(int i=0;i<word.size();i++){
//             if(!node->links[word[i]-'a']){
//                 node->links[word[i]-'a']= new Node();
//             }
//             node = node->links[word[i]-'a'];
//             node->cp++;
//         }
//         node->ew++;
//     }

//     int countWordsEqualTo(string &word){
//         Node* node = root;
//         for(int i=0;i<word.size();i++){
//             if(!node->links[word[i]-'a'])
//                 return 0;
//             node = node->links[word[i]-'a'];
//         }
//         return node->ew;
//     }

//     int countWordsStartingWith(string &word){
//         Node* node = root;
//         for(int i=0;i<word.size();i++){
//             if(!node->links[word[i]-'a'])
//                 return 0;
//             node = node->links[word[i]-'a'];
//         }
//         return node->cp;
//     }

//     void erase(string &word){
//          Node* node = root;
//         for(int i=0;i<word.size();i++){
//             if(!node->links[word[i]-'a']){
//                 return;
//             }
//             node = node->links[word[i]-'a'];
//             node->cp--;
//         }
//         node->ew--;
//     }
// };
