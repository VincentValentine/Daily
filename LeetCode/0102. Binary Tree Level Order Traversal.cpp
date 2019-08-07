class Solution {
public:
    vector<vector<int>> levels;

    vector<vector<int>> levelOrder(TreeNode* root) {
        return helper(root, 0);
    }

    vector<vector<int>> helper(TreeNode* root, int level) {
        if(root == nullptr) return levels;

        vector<int> temp;
        if(level == levels.size()) levels.push_back(temp);
        levels[level].push_back(root->val);
        helper(root->left, level+1);
        helper(root->right, level+1);
        return levels;
    }
};
