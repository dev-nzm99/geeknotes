/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> rightView(Node *root) {
        vector<int> res;
        if (root == NULL)
            return res;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; ++i) {
                Node* node = q.front();
                q.pop();
                if (i == n - 1)
                    res.push_back(node->data);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        return res;
    }
};