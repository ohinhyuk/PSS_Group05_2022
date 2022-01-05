using tree = TreeNode *;

class Solution {
public:

    void recursion_left(tree root, vector<int> & v){
        if(root==nullptr){
            v.push_back(-1);
        }
        else{
            v.push_back(root->val);
            recursion_left(root->left , v);
            recursion_left(root->right , v);
        }
    }
    void recursion_right(tree root, vector<int> & v){
        if(root==nullptr){
            v.push_back(-1);
        }
        else{
            v.push_back(root->val);
            recursion_right(root->right , v);
            recursion_right(root->left , v);
        }
    }

    bool isSymmetric(TreeNode* root) {
        vector<int> v1;
        vector<int> v2;

        recursion_left(root,v1);
        recursion_right(root,v2);

        if(v1==v2){
            return true;
            
        }
        else{
            return false;
        }
    }
};