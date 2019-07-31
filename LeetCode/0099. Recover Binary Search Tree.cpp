class Solution {
public:
    TreeNode *pre = nullptr, *first = pre, *second = pre;

    void recoverTree(TreeNode* root) {
        inorder(root);
        first->val = first->val^second->val;
        second->val = first->val^second->val;
        first->val = first->val^second->val;
    }

    void inorder(TreeNode* root) {
        if(root == nullptr) return ;

        inorder(root->left);
        if(pre!=nullptr && pre->val>root->val) {
            if(first == nullptr) first = pre;
            second = root;
        }
        pre = root;
        inorder(root->right);
    }
};
