class Solution {
public:
    int maxArea(vector<int>& height) {
        int l, r, maxV;

        l = maxV = 0, r = height.size()-1;
        while(l < r) {
            maxV = max(maxV,(r-l)*min(height[l],height[r]));
            if(height[l] > height[r]) --r;
            else ++l;
        }

        return maxV;
    }
};
