class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i, res = nums[0], n = nums.size();
        
        for(i=1; i<n; ++i) res ^= nums[i];

        return res;
    }
};
