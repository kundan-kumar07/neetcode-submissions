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
    TreeNode * helper(vector<int>&preorder,int &idx,int left,int right,vector<int>&inorder){
        if(left>right){
            return NULL;
        }
        TreeNode*root=new TreeNode(preorder[idx]);
        int foundAt;
        
        for(int i=0;i<inorder.size();i++){
            if(inorder[i]==preorder[idx]){
                foundAt=i;
                break;
                
                
            }
        }

        idx++;
        root->left=helper(preorder,idx,left,foundAt-1,inorder);
        root->right=helper(preorder,idx,foundAt+1,right,inorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int idx=0;
        return helper(preorder,idx,0,inorder.size()-1,inorder);
        
    }
};
