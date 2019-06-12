class Solution {
public:
    string longestPalindrome(string s) {
        int i, pos, maxRight, maxPoint, maxLen;
        string p = "#";

        for(i=0; i<s.size(); ++i) {
            p += s[i];
            p += '#';
        }
        pos = maxRight = maxPoint = maxLen = 0;
        vector<int> radius(p.size(), 0);

        for(i=0; i<p.size(); ++i) {
            radius[i] = maxRight>i?min(radius[2*pos-i], maxRight-i):1;
            while(i+radius[i]<p.size() && i-radius[i]>=0 && p[i+radius[i]]==p[i-radius[i]]) ++ radius[i];
            if(i+radius[i] > maxRight) {
                maxRight = i+radius[i];
                pos = i;
            }
            if(radius[i] > maxLen) {
                maxLen = radius[i]-1;
                maxPoint = i;
            }
        }

        return s.substr((maxPoint-maxLen)/2, maxLen);
    }
};
