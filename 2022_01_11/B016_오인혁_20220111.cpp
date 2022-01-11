#include <queue>
#include <iostream>
using namespace std;
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
    TreeNode* input_to_queue(TreeNode* root, queue<TreeNode*>& q){
        if(root == nullptr){
            return nullptr;
        }
        root->left =input_to_queue(root->left, q);
        q.push(root);
        root->right = input_to_queue(root->right , q);

        return root;
    }

    TreeNode* make_one_line(queue<TreeNode*> q){
        if(q.empty()){
            return nullptr;
        }
        TreeNode* root = q.front();
        TreeNode* Node = root;
        
        q.pop();
        while(!q.empty()){
            Node->left = nullptr;
            Node->right = q.front();
            Node = Node->right;
            q.pop();
        }
        return root;
    }

    TreeNode* increasingBST(TreeNode* root) {
        queue<TreeNode*> q;
        root = input_to_queue(root,q);
        root = make_one_line(q);
        return root;
    }
};