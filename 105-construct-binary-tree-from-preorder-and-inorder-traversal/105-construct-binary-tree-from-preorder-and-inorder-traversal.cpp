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
    TreeNode* bTree(vector<int>& preorder, vector<int>& inorder,int &preIndex, int left , int right, unordered_map<int,int> &mp)
    {
        if(left>right) return nullptr;
        int pivot = mp[preorder[preIndex]];
        TreeNode *root = new TreeNode(inorder[pivot]);
        preIndex++;
        
        root->left = bTree(preorder,inorder,preIndex,left, pivot-1,mp);
        root->right = bTree(preorder,inorder,preIndex, pivot+1,right ,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int preIndex = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i< preorder.size() ; i++)
        {
            mp[inorder[i]] = i;
        }
        return bTree(preorder,inorder,preIndex , 0 ,inorder.size()-1 , mp);
    }
};