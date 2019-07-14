class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i, p = m+n-1, pm = m-1, pn = n-1;
        
        while(pm>=0 && pn>=0) nums1[p--] = nums1[pm]>nums2[pn]?nums1[pm--]:nums2[pn--];
        while(pn >= 0) nums1[p--] = nums2[pn--];
    }
};
