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
class Solution {
public:
    int maxDepth(TreeNode* root) {
        // BASE CASE
        if (root == nullptr) {
            return 0;
        }

        // recursively call left and right subtrees
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        // find max height between left and right subtrees
        return max(left+1, right+1);
    }
};
