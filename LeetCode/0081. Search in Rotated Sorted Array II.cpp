class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size(), left = 0, right = n-1, mid;
        
        while(left <= right) {
            mid = left+(right-left)/2;
            if(target == nums[mid]) return true;
            if(nums[left]==nums[mid] && nums[mid]==nums[right]) {
                ++left; --right;
            } else if(nums[left] <= nums[mid]) {
                if(target>=nums[left] && target<nums[mid]) right = mid-1;
                else left = mid+1;
            } else {
                if(target>nums[mid] && target<=nums[right]) left = mid+1;
                else right = mid-1;
            }
        }
        return false;
    }
};
