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
    stack<TreeNode *>s1;
    stack<TreeNode *>s2;
    void getLeft(TreeNode *root,stack<TreeNode *>&s){
        if(!root){
            return;
        }
        s.push(root);
        getLeft(root->left,s);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        getLeft(root1,s1);
        getLeft(root2,s2);
        vector<int>ans;
        while(!s1.empty() && !s2.empty()){
            TreeNode * top1=s1.top();
            TreeNode * top2=s2.top();
            if(top1->val<top2->val){
                ans.push_back(top1->val);
                s1.pop();
                getLeft(top1->right,s1);
            }
            else{
                ans.push_back(top2->val);
                s2.pop();
                getLeft(top2->right,s2);
            }
        }
        
        if(s1.empty() && s2.empty()){
            return ans;
        }
        stack<TreeNode *>st=s1.empty()?s2:s1;
        while(!st.empty()){
            TreeNode * node=st.top();
            st.pop();
            ans.push_back(node->val);
            getLeft(node->right,st);
        }
        return ans;
    }
};
