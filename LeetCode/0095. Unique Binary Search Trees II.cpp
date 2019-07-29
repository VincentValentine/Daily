class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        if(!n) return vector<TreeNode*>(0);
        return generate(1, n);
    }

    vector<TreeNode*> generate(int start, int end) {
        vector<TreeNode*> res;

        if(start > end) {
            res.push_back(nullptr);
            return res;
        }
        
        for(int i=start; i<=end; ++i) {
            vector<TreeNode*> left = generate(start, i-1);
            vector<TreeNode*> right = generate(i+1, end);
            for(int j=0; j<left.size(); ++j) {
                for(int k=0; k<right.size(); ++k) {
                    TreeNode *root = new TreeNode(i);
                    root->left = left[j];
                    root->right = right[k];
                    res.push_back(root);
                }
            }
        }
        return res;
    }
};
