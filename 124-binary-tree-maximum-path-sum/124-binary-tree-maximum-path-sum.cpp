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
    int max_Sum = INT_MIN;
    int maxPath_Sum(TreeNode* root) {
        if(root==NULL) return 0;
        int lf = max(maxPath_Sum(root->left),0);
        int rh = max(maxPath_Sum(root->right),0);
        int currSum = root->val + lf + rh;
        max_Sum = max(currSum,max_Sum);
        return root->val+max(lf,rh);
    }
    int maxPathSum(TreeNode* root) {
        maxPath_Sum(root);
        return max_Sum;
    }
};