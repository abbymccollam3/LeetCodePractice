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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // Check if the root is null
        if (root == nullptr) {
            return {};  // Return an empty vector if the tree is empty
        }

        queue<TreeNode*> queue;
        vector<vector<int>> traversal;

        queue.push(root);  // Add the root node to the queue

        // Start level-order traversal
        while (!queue.empty()) {
            vector<int> currLevel;
            int currSize = queue.size();  // Get the number of nodes at the current level

            // Process all nodes at the current level
            for (int i = 0; i < currSize; i++) {
                TreeNode* currNode = queue.front();  // Get the next node
                queue.pop();  // Remove it from the queue

                // Add its value to the current level's vector
                currLevel.push_back(currNode->val);

                // Add the children to the queue if they are not null
                if (currNode->left != nullptr) {
                    queue.push(currNode->left);
                }
                if (currNode->right != nullptr) {
                    queue.push(currNode->right);
                }
            }

            // Add the current level's vector to the result
            traversal.push_back(currLevel);
        }

        return traversal;
    }
};
