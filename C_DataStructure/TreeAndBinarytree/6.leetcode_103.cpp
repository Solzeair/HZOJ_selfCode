/*************************************************************************
	> File Name: 5.leetcode_103.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Wed 12 Mar 2025 03:26:10 PM CST
 ************************************************************************/

class Solution {
public:
    void dfs(TreeNode *root, int k, vector<vector<int>> &ans) {
        if (root == NULL) return ;
        if (k == ans.size()) ans.push_back(vector<int>());
        ans[k].push_back(root->val);
        dfs(root->left,  k + 1, ans);
        dfs(root->right, k + 1, ans);
        return ;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        dfs(root, 0, ans); // step1
        // step2
        for (int k = 1; k < ans.size(); k += 2) {
            for (int i = 0, j = ans[k].size() - 1; i < j; i++, j--) {
                swap(ans[k][i], ans[k][j]);
            }
        }
        return ans;
    }
};
