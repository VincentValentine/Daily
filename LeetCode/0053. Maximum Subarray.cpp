class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i, len = nums.size(), sum = nums[0], res = sum;
        
        for(i=1; i<len; ++i) {
            sum = sum<0?nums[i]:sum+nums[i];
            res = sum>res?sum:res;
        }
        
        return res;
    }
};
