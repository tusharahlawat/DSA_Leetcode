class Solution {
public:
    unordered_map<TreeNode*, long long> dp;

    int rob(TreeNode* root) {
        if (!root) return 0;
        if (dp.count(root)) return dp[root];

        long long robThis = root->val;
        if (root->left) {
            robThis += rob(root->left->left) + rob(root->left->right);
        }
        if (root->right) {
            robThis += rob(root->right->left) + rob(root->right->right);
        }

        long long skipThis = rob(root->left) + rob(root->right);

        return dp[root] = max(robThis, skipThis);
    }
};