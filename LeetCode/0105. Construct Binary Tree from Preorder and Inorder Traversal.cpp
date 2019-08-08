class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1);
    }

    TreeNode* helper(vector<int> preorder, int ps, int pe, vector<int>inorder, int is, int ie) {
        if(ps > pe) return nullptr;

        int i;
        TreeNode* root = new TreeNode(preorder[ps]);
        for(i=is; i<=ie; ++i) if(inorder[i] == root->val) break;
        root->left = helper(preorder, ps+1, ps+i-is, inorder, is, i-1);
        root->right = helper(preorder, ps+i-is+1, pe, inorder, i+1, ie);
        return root;
    }
};
