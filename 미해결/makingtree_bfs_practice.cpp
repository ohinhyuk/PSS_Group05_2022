tree make_tree_bfs(tree root, queue<int> q){
        queue<tree> q_tree;
        tree Node = new TreeNode;

        q_tree.push(root);
        while(!q.empty()){
            
            Node = q_tree.front();
            q_tree.pop();
            
            Node->val = q.front();
            q.pop();

            Node->left = new TreeNode;
            Node->right = new TreeNode;
            
            q_tree.push(Node->left);
            q_tree.push(Node->right);
        }
        return root;
    }
    void print_tree_bfs(tree root){
        queue<tree> q_tree;
        tree Node = new TreeNode;
        q_tree.push(root);
        while(!q_tree.empty()){

            Node = q_tree.front();
            q_tree.pop();

            cout << Node->val << ' ';
            if(Node->left != nullptr){
                q_tree.push(Node->left);
            }
            if(Node->right !=nullptr){
                q_tree.push(Node->right);
            }
        }
        cout << endl;
    }
};
int main(int args, char** argv){
    Solution s ;
    queue<int> num;
    queue<int> num2;
    tree root1 = new TreeNode;
    tree root2 = new TreeNode;

    vector<int> v = {1,3,2,5};
    vector<int> v2 = {2, 1, 3, NULL, 4 , NULL,7};

    for(auto x : v){
        num.push(x);
    }
    for(auto x : v2){
        num2.push(x);
    }
    s.print_tree_bfs(s.make_tree_bfs(root1,num));
    s.print_tree_bfs(s.make_tree_bfs(root2,num2));


}