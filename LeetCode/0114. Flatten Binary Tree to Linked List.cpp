class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == nullptr) return ;

        if(root->left) {
            TreeNode *cur = root->left;
            while(cur->right) cur = cur->right;
            cur->right = root->right;
            root->right = root->left;
            root->left = nullptr;
        }
        flatten(root->right);
    }
};
