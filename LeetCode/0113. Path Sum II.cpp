class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> path;
        vector<vector<int>> res;
        helper(root, sum, path, res);
        return res;
    }

    void helper(TreeNode *root, int sum, vector<int> &path, vector<vector<int>> &res) {
        if(root == nullptr) return ;

        path.push_back(root->val);
        if(!root->left && !root->right && sum==root->val) res.push_back(path);
        helper(root->left, sum-root->val, path, res);
        helper(root->right, sum-root->val, path, res);
        path.pop_back();
    }
};
