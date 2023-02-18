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
    void inorder(TreeNode *root,vector<int>&in){
        if(!root) return;
        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
    
    int minDiffInBST(TreeNode* root) {
        if(root==NULL) return 0;
        vector<int> in;

        inorder(root,in);
        int res = INT_MAX;
        for(int i=1; i<in.size(); i++){
            res = min(res,in[i]-in[i-1]);
        }
        return res;
            
        
    }
};