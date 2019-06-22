class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i, left, right, sum, len, minDiff, diff, res;

        sort(nums.begin(), nums.end());
        len = nums.size(), res = nums[0]+nums[1]+nums[2];
        minDiff = abs(target-res);
        for(i=0; i<len; ++i) {
            left = i+1, right = len-1;
            while(left < right) {
                sum = nums[i]+nums[left]+nums[right];
                diff = abs(target-sum);
                if(diff == 0) return sum;
                if(diff < minDiff) {
                    res = sum;
                    minDiff = diff;
                }
                if(sum < target) ++left;
                else --right;
            }
        }

        return res;
    }
};
