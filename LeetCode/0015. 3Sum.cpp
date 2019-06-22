class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i, left, right, len, target, sum;
        vector<vector<int>> res;

        len = nums.size();
        sort(nums.begin(), nums.end());
        for(i=0; i<len; ++i) {
            target = -nums[i];
            left = i+1, right = len-1;
            while(left < right) {
                sum = nums[left]+nums[right];
                if(sum < target) ++left;
                else if(sum > target) --right;
                else {
                    vector<int> temp(3, 0);
                    temp[0] = nums[i], temp[1] = nums[left], temp[2] = nums[right]; 
                    res.push_back(temp);
                    while(left<right && nums[left]==temp[1]) ++left;
                    while(left<right && nums[right]==temp[2]) --right;
                } 
            }
            while(i+1<len && nums[i+1]==nums[i]) ++i;
        }

        return res;
    }
};
