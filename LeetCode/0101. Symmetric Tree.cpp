class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return symmetric(root, root);
    }
    
    bool symmetric(TreeNode *p, TreeNode *q) {
        if(p==nullptr && q==nullptr) return true;
        if(p==nullptr || q==nullptr) return false;
        if(p->val != q->val) return false;
        return symmetric(p->left, q->right)&&symmetric(p->right, q->left);
    }
};
