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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       
        vector<vector<int>>mainAns;
        vector<int> currAns;  
        int sum = 0;
        dfs(root,targetSum,mainAns,currAns,sum);
        return mainAns;        
    }
    
    void dfs(TreeNode* root, int targetSum,vector<vector<int>>&mainAns,vector<int> &ans,int currSum)
    {
        if(root==NULL) return;
        
        currSum += root->val;
        ans.push_back(root->val);
        if(root->left ==NULL && root->right==NULL && currSum == targetSum)
        {
            mainAns.push_back(ans);
            // return;
        }
        dfs(root->left,targetSum,mainAns,ans,currSum);
        dfs(root->right,targetSum,mainAns,ans,currSum);
        ans.pop_back();//bactracking step most neccasary
    }
};