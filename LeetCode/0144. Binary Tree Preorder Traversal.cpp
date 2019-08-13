class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;

        helper(root, res);

        return res;
    }

    void helper(TreeNode *node, vector<int> &res) {
        if(node == nullptr) return ;

        res.push_back(node->val);
        helper(node->left, res);
        helper(node->right, res);
    }
};
