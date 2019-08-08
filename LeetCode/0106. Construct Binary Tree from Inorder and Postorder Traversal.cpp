class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1);        
    }

    TreeNode* helper(vector<int> inorder, int is, int ie, vector<int> postorder, int ps, int pe) {
        if(ps > pe) return nullptr;

        int i;
        TreeNode* root = new TreeNode(postorder[pe]);
        for(i=is; i<=ie; ++i) if(inorder[i] == root->val) break;
        root->left = helper(inorder, is, i-1, postorder, ps, ps+i-is-1);
        root->right = helper(inorder, i+1, ie, postorder, ps+i-is, pe-1);
        return root;
    }
};
