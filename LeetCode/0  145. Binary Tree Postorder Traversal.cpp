class Solution {
public:
    vector<int> res;

    vector<int> postorderTraversal(TreeNode* root) {
        postOrder(root);
        return res;    
    }

    void postOrder(TreeNode* root) {
        if(root == nullptr) return ;

        postOrder(root->left);
        postOrder(root->right);
        res.push_back(root->val);
    }
};
