/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int diff=INT_MAX;
    TreeNode* p=NULL;
    void order(TreeNode* root) {
        if (root == NULL)
            return;
        order(root->left);
        if(p){
             diff=min(diff,abs(p->val - root->val) );
        }
        p=root;        
        order(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        order(root);
        return diff;
    }
};