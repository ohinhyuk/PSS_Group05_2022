#include <vector>
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
    
    bool is_in(TreeNode* root , int targetSum , vector<int>& v){
        if(root ==nullptr) return false;
        v.push_back(root->val);
        if(!is_in(root->left , targetSum , v) && !is_in(root->right , targetSum , v) ){
            if(targetSum == calculate_sum(v) && !root->left && !root->right){
                return true;
            }
            else{
                v.pop_back();
                return false;
            }
        }
        return true;
    }
    
    int calculate_sum (vector<int> v){
        int sum = 0;
        for(int i = 0 ; i < v.size(); i++){
           sum += v[i];
        }
        return sum;
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool fact ;
        vector<int> v;
        fact = is_in(root, targetSum ,v);
        
        return fact;
    }
};