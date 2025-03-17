/*************************************************************************
	> File Name: 6.leetcode_LCR143.cpp
	> Author: Sakurarry
	> Mail: solzeair@gmail.com
	> Created Time: Wed 12 Mar 2025 04:14:26 PM CST
 ************************************************************************/

// 该题认为：空树 不会是以 treeA 的某个节点为根（包括空树）的子树具有 相同的结构和节点值 
class Solution {
public:
    bool match_one(TreeNode *A, TreeNode *B) {
        if (A == NULL) return B == NULL;
        if (B == NULL) return true;
        if (A->val != B->val) return false;
        return match_one(A->left, B->left) && match_one(A->right, B->right);
    }
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if (A == NULL || B == NULL) return false;
        if (A->val == B->val && match_one(A, B)) return true;
        if (isSubStructure(A->left,  B)) return true;
        if (isSubStructure(A->right, B)) return true;
        return false;
    }
};
