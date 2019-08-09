class Solution {
public:
    vector<vector<int>> res;

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        helper(root, 0);
        return res;
    }

    void helper(TreeNode* root, int depth) {
        if(root == nullptr) return ;

        vector<int> temp;
        if(depth == res.size()) res.insert(res.begin(), temp);
        res[res.size()-depth-1].push_back(root->val);
        helper(root->left, depth+1);
        helper(root->right, depth+1);
    }
};
