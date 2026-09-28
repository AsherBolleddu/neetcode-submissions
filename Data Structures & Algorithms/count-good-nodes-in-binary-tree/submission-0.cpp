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
    int goodNodes(TreeNode* root) {
        auto dfs{[](this auto&& self, TreeNode* node, int maxVal) {
            if (!node) return 0;
            int count{0};
            if (node->val >= maxVal) ++count;
            count += self(node->left, max(maxVal, node->val));
            count += self(node->right, max(maxVal, node->val));

            return count;
        }};

        return dfs(root, numeric_limits<int>::min());
    }
};
