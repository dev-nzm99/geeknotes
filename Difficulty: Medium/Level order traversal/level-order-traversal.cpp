/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>> res;

        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
           int  len = q.size();
           res.push_back({}); //add empty row 
           int currLvl = 0;
           for(int i = 0; i<len; ++i){
               Node* treeNode = q.front();
               q.pop();
               res[currLvl].push_back(treeNode->data);
               if(treeNode->left){
                   q.push(treeNode->left);
               }
               if(treeNode->right){
                   q.push(treeNode->right);
               }
           }
           currLvl++; 
        }        
        return res;
    }
};