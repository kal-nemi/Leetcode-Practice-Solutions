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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> s;
        return sum(root,s,k); 
    }
    bool sum(TreeNode *root,unordered_set<int> &s,int k)
    {
        if(root==NULL) return false;
        if(s.count(k-root->val)) return true;
        s.insert(root->val);
        return sum(root->left,s,k) || sum(root->right,s,k);
        
    }
    
    
};