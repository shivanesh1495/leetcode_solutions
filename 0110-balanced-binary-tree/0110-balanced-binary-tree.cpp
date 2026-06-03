/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

/*class Solution {
public:
    int maxd(TreeNode* root){
        if(!root) return 0;

        return 1 + max(maxd(root->left), maxd(root->right));
    }

    bool isBalanced(TreeNode* root) {
        if(!root) return true;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();

            int l = 0, r = 0;

            if(curr->left)
                l = maxd(curr->left);

            if(curr->right)
                r = maxd(curr->right);

            if(abs(l - r) > 1)
                return false;

            if(curr->left)
                q.push(curr->left);

            if(curr->right)
                q.push(curr->right);
        }

        return true;
    }
};
*/

class Solution {
public:
    int height(TreeNode* root){
        if(!root) return 0;

        int left = height(root->left);
        if(left == -1) return -1;

        int right = height(root->right);
        if(right == -1) return -1;

        if(abs(left - right) > 1)
            return -1;

        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root) {
        return height(root) != -1;
    }
};