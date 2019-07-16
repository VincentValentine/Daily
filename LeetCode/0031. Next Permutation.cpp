class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i, p, q, n = nums.size();

        for(i=n-2; i>=0; --i) 
            if(nums[i] < nums[i+1]) { p = i; break; }
        if(i < 0) { reverse(nums.begin(), nums.end()); return; }
        for(i=n-1; i>p; --i) 
            if(nums[p] < nums[i]) { q = i; break; }
        swap(nums[p], nums[q]);
        reverse(nums.begin()+p+1, nums.end());
    }
};
