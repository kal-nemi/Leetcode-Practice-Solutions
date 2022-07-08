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
    vector<int> inorderTravesalIterative(TreeNode *root)
    {
        vector<int> ans;
        stack<TreeNode *> st;
        TreeNode *curr = root;
        while(curr!= NULL || st.empty()==false)
        {
            while(curr!=NULL)
            {
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top();
            st.pop();
            ans.push_back(curr->val);
            curr = curr->right;            
        }
        return ans;
    }
public:
    void inorder(TreeNode* root,vector<int> &ans)
    {
        if(root!=NULL)
        {
            inorder(root->left,ans);
            ans.push_back(root->val);
            inorder(root->right,ans);   
        }
        // else ans;
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        return ans;
        
        
    }
};