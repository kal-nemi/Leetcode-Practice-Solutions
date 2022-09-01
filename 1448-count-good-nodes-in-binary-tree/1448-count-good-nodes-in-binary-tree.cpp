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
    // int count  = 0;
    void DFS(TreeNode* root,int currMax, int &count)
    {
        if(!root) return;
        
        if(root->val >= currMax)
        {
            count++;
            currMax = root->val;
        }
        
         DFS(root->left,currMax,count);
         DFS(root->right,currMax,count);
    }
    int goodNodes(TreeNode* root) {
        int cnt = 0;
        DFS(root,root->val,cnt);
        return cnt;
    }
};