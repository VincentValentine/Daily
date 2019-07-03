class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = !nums.empty();

        for(int a: nums) 
            if(a != nums[i-1]) nums[i++] = a;

        return i;
    }
};
