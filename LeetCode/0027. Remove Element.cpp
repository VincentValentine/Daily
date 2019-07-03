class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i, j = 0, n = nums.size();

        for(i=0; i<n; ++i) 
            if(nums[i] != val) nums[j++] = nums[i];

        return j;
    }
};
