/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        // BASE CASE: if root is nullptr or p or q = root, return root
        if (root == nullptr || p == root || q == root) {
            return root;
        }

        // find left and right LCA
        TreeNode* leftLCA = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightLCA = lowestCommonAncestor(root->right, p, q);

        // if both left and right subtrees return a non null value
        if (leftLCA != nullptr && rightLCA != nullptr) {
            return root;
        }

        // if only left LCA returns non null value, 
        // then LCA is in leftLCA so return leftLCA
        // otherwise return rightLCA
        return (leftLCA != nullptr) ?  leftLCA : rightLCA;
    }
};
