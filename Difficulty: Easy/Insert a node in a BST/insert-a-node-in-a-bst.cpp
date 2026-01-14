/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    Node* insert(Node* root, int key) {
        if(root == NULL) 
           return new Node(key);
        
        if(root->data < key){
            root->right = insert(root->right, key);
        }else{
            root->left = insert(root->left, key);
        }
        return root;
    }
};