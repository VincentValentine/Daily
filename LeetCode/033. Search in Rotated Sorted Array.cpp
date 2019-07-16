class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, mid;

        while(l < r) {
            mid = l+(r-l)/2;
            if((nums[0]>target) ^ (target>nums[mid]) ^ (nums[0]>nums[mid])) l = mid+1;
            else r = mid;
        }
        
        return l==r&&nums[l]==target ? l : -1;
    }
};
