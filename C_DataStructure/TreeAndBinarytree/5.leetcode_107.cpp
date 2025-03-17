/*************************************************************************
	> File Name: 5.leetcode_107.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Wed 12 Mar 2025 03:32:42 PM CST
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        dfs(root, 0, ans);
        for (int i = 0, j = ans.size() - 1; i < j; i++, j--) {
            swap(ans[i], ans[j]);
        }
        return ans;
    }
};
