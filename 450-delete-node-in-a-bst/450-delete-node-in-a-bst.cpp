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
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root){
            if(key < root->val)     
                root->left =  deleteNode(root->left,key);
            else if(key >root->val) 
                root->right = deleteNode(root->right, key);
            else
            {
                if(root->left==NULL && root->right==NULL) return NULL;  // if no child present
                
                if(root->left==NULL || root->right==NULL)
                    return root->left? root->left : root->right; //if one child present

                TreeNode *curr = root->right; // inorder successor which is left most element of  right subtree
                while(curr->left!=NULL)
                {
                    curr = curr->left;
                }
                root->val = curr->val;
                root->right = deleteNode(root->right,curr->val);
            }
        }
        return root;
    }
};