#include <cstdlib>
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
    int height(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        return max(height(root->left),height(root->right)) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        int right_h = 0;
        int left_h = 0;
        right_h = height(root->right);
        left_h = height(root->left);
        
        return abs(right_h -left_h) <=1 && isBalanced(root->left) && isBalanced(root->right);
    }
};