class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i, j, len;
        double res;
        vector<int> num;

        for(i=0; i<nums1.size(); ++i) num.push_back(nums1[i]);
        for(i=0; i<nums2.size(); ++i) num.push_back(nums2[i]);
        sort(num.begin(), num.end());
        len = num.size(); j = len/2;
        if(len%2 != 0) res = num[j]*1.0;
        else res = (num[j]+num[j-1])*1.0/2;

        return res;
    }
};
