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
    int diameterOfBinaryTree(TreeNode* root) {
        int res{0};
        auto dfs{[&res](this auto&& self, TreeNode* node) {
            if (!node) return 0;
            int left{self(node->left)};
            int right{self(node->right)};
            res = max(res, left + right);
            return max(left, right) + 1;
        }};

        dfs(root);
        return res;
    }
};
