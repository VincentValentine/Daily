class Solution {
public:
    int res = 0;

    int sumNumbers(TreeNode* root) {
        helper(root, 0);

        return res;
    }

    void helper(TreeNode *node, int sum) {
        if(node == nullptr) return ;

        sum = sum*10+node->val;
        if(!node->left && !node->right) { res += sum; return ; }
        helper(node->left, sum);
        helper(node->right, sum);
    }
};
