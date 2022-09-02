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
    void inorder(TreeNode* root,vector<int> &ans)
    {
        if(root!=NULL){
            inorder(root->left,ans);
            ans.push_back(root->val);
            inorder(root->right,ans);
        }
        
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> i1,i2;
        inorder(root1,i1);
        inorder(root2,i2);
        vector<int> ans ;
        ans = i1;
        copy(i2.begin(),i2.end(),back_inserter(ans));
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};