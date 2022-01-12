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
    
    TreeNode* inorder_converter(TreeNode* root , vector<int> & v){
        if(root==nullptr) return nullptr;
        
        root->left = inorder_converter(root->left, v);
        v.push_back(root->val);
        root->right = inorder_converter(root->right, v);
        
        return root;
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        
        root = inorder_converter(root,v);
        return v;
    }
};