class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 2, cnt = 0, n = nums.size();

        for(; i<n; ++i) 
            if(nums[i] == nums[i-2-cnt]) ++cnt;
            else nums[i-cnt] = nums[i];

        return n-cnt;
    }
};
