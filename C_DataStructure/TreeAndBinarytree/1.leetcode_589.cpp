/*************************************************************************
	> File Name: 1.leetcode_589.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Tue 11 Mar 2025 02:01:17 PM CST
 ************************************************************************/

// normal
class Solution {
public:
    vector<int> preorder(Node* root) {
        if (root == NULL) return vector<int>();
        vector<int> ans;
        ans.push_back(root->val);
        for (auto x : root->children) {
            auto temp = preorder(x);
            for (auto y : temp) ans.push_back(y);
        }
        return ans;
    }
};

// better
class Solution {
public:
    void __preorder(Node *root, vector<int>& ans) {
        if (root == NULL) return ;
        ans.push_back(root->val);
        for (auto x : root->children) {
            __preorder(x, ans);
        }
        return ;
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        __preorder(root, ans);
        return ans;
    }
};
