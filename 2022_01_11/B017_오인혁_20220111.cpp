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
    TreeNode* invertTree(TreeNode* root) {
       if(root==nullptr) return nullptr;
        
        TreeNode* temp = new TreeNode;
        TreeNode* check_left = invertTree(root->left);
        TreeNode* check_right = invertTree(root->right);
        
        if(check_left!=nullptr || check_right!=nullptr){
            temp = root->left;
            root->left = root-> right;
            root->right = temp;
        }
        
        return root;
    }
};