class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int i, j, n = nums.size(), p = 1<<n;
        vector<vector<int>> res(p);

        for(i=0; i<p; ++i)
            for(j=0; j<n; ++j) 
                if((i>>j) & 1) res[i].push_back(nums[j]);

        return res;
    }
};
