class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size(), left = 0, right = n, mid, p, q;

        while(left < right) {
            mid = left+(right-left)/2;
            if(target > nums[mid]) left = mid+1;
            else right = mid;
        }
        if(left==n || nums[left]!=target) p = -1;
        else p = left;

        left = 0, right = n;
        while(left < right) {
            mid = left+(right-left)/2;
            if(target < nums[mid]) right = mid;
            else left = mid+1;
        }
        if(left==0 || nums[left-1]!=target) q = -1;
        else q = left-1;

        return { p, q };
    }
};
