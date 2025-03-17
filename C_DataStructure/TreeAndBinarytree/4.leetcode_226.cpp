/*************************************************************************
	> File Name: 4.leetcode_226.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Tue 11 Mar 2025 04:59:39 PM CST
 ************************************************************************/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return NULL;
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
