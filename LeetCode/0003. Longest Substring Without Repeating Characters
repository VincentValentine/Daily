class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i, left, maxLen;
        left = -1, maxLen = 0;
        vector<int> vi(256, -1);

        for(i=0; i<s.size(); ++i) {
            if(left < vi[s[i]]) left = vi[s[i]];
            maxLen = max(maxLen, i-left);
            vi[s[i]] = i;
        }

        return maxLen;
    }
};
