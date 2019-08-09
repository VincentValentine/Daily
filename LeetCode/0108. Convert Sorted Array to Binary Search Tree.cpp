class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1);
    }

    TreeNode* helper(vector<int> &nums, int p, int q) {
        if(p > q) return nullptr;

        int index = p+(q-p)/2;
        TreeNode *root = new TreeNode(nums[index]);
        root->left = helper(nums, p, index-1);
        root->right = helper(nums, index+1, q);
        return root;
    }
};
