/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
         vector<int> result;

        if (root == NULL)
            return result;

        queue<Node*> q;
        q.push(root);
        int lvl_cnt = 0;

        while (!q.empty()) {
            int n = q.size();
            vector<int> currLvl(n, 0);
            for (int i = 0; i < n; ++i) {
                Node* node = q.front();
                q.pop();
                (lvl_cnt & 1) ? currLvl[n - i - 1] = node->data
                              : currLvl[i] = node->data;
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            ++lvl_cnt;
            for(auto x:currLvl)
                result.push_back(x);
        }
        return result;
        
    }
};