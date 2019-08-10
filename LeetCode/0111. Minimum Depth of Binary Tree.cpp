class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        if(!root->left && !root->right) return 1;

        int d1 = minDepth(root->left), d2 = minDepth(root->right);
        return d1==0||d2==0?d1+d2+1:min(d1,d2)+1;
    }
};
