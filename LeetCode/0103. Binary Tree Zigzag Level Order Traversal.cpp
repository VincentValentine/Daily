class Solution {
public:
    vector<vector<int>> res;

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        return helper(root, 0);
    }

    vector<vector<int>> helper(TreeNode* root, int level) {
        if(root == nullptr) return res;

        vector<int> temp;
        if(level == res.size()) res.push_back(temp);
        if(level%2 == 0) res[level].push_back(root->val);
        else res[level].insert(res[level].begin(), root->val);
        helper(root->left, level+1);
        helper(root->right, level+1); 
        return res;
    }
};
