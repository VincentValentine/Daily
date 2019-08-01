class Solution {
public:
    int res = INT_MIN;
    int maxPathSum(TreeNode* root) {
        DFS(root);

        return res;
    }

    int DFS(TreeNode* root) {
        if(root == nullptr) return 0;

        int left = max(DFS(root->left), 0);
        int right = max(DFS(root->right), 0);
        res = max(res, root->val+left+right);
        return root->val+max(left, right);
    }
};
