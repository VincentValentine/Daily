class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i, j, n, left, right, sum;
        set<vector<int>> st;
        vector<vector<int>> res;

        n = nums.size();
        if(n < 4) return res;
        sort(nums.begin(), nums.end());
        for(i=0; i<n-3; ++i) {
            for(j=i+1; j<n-2; ++j) {
                left = j+1, right = n-1;
                while(left < right) {
                    sum = nums[i]+nums[j]+nums[left]+nums[right];
                    if(sum > target) --right;
                    else if(sum < target) ++left;
                    else {
                        st.insert(vector<int>{nums[i], nums[j], nums[left], nums[right]});
                        ++left; --right;
                    }
                }
            }
        }
        for(auto a: st) res.push_back(a);

        return res;
    }
};
