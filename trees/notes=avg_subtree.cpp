/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    pair<int, int> trav(TreeNode* root, int& count) {
        if (root == nullptr)
            return {0, 0};

        auto [leftSum, leftCount] = trav(root->left, count);
        auto [rightSum, rightCount] = trav(root->right, count);

        int subTreeSum = leftSum + rightSum + root->val;
        int subTreeCount = leftCount + rightCount + 1;

        if (subTreeSum / subTreeCount == root->val)
            count++;
        return {subTreeSum, subTreeCount};
    }

    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        trav(root, count);
        return count;
    }
};