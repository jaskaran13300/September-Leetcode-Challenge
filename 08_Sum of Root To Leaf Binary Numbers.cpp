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
    int sum=0;
    void helper(TreeNode * root,string bin){
        if(!root){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            bin=bin+to_string(root->val);
            sum+=stoi(bin, 0, 2);
            return;
        }
        bin+=to_string(root->val);
        helper(root->left,bin);
        helper(root->right,bin);
        
    }
    int sumRootToLeaf(TreeNode* root) {
        
        helper(root,"");
        return sum;
    }
};
