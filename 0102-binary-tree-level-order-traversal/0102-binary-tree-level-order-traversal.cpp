class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> b;

        if (!root) {
            return {};
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            vector<int> level;

            for (int i = 0; i < n; i++) {
                TreeNode* cur = q.front();
                q.pop();

                level.push_back(cur->val);

                if (cur->left) {
                    q.push(cur->left);
                }

                if (cur->right) {
                    q.push(cur->right);
                }
            }

            b.push_back(level);
        }

        return b;
    }
};