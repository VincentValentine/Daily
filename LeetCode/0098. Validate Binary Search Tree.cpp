class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValid(root, LONG_MIN, LONG_MAX);
    }

    bool isValid(TreeNode* root, long long left, long long right) {
        if(root == nullptr) return true;

        if(root->val<=left || root->val>=right) return false;
        return isValid(root->left, left, root->val) && isValid(root->right, root->val, right);
    }
};
