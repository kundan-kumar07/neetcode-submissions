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
    bool sameTree(TreeNode*p,TreeNode*q){
        if(p==NULL || q==NULL){
            return p==q;
        }
        if(p->val!=q->val){
            return false;


        }

        bool checkLeft=sameTree(p->left,q->left);
        bool checkRight=sameTree(p->right,q->right);
        return checkLeft && checkRight;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL && subRoot==NULL){
            return true;
        }
        if(root!=NULL && subRoot==NULL){
            return true;
        }
        if(root==NULL && subRoot!=NULL){
            return false;
        }
        bool rootCheck=false;
        if(root->val==subRoot->val){
            rootCheck= sameTree(root,subRoot);
            
        }
        bool leftPresent=isSubtree(root->left,subRoot);
        bool rightPresent=isSubtree(root->right,subRoot);
        return rootCheck || leftPresent || rightPresent;


        
    }
};
