class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(!strs.size()) return "";
        
        int i, j, cnt = strs.size(), len = strs[0].size();
        string sample = strs[0], res = "";
        
        for(i=1; i<cnt; ++i) len = len<strs[i].size()?len:strs[i].size();
        for(j=0; j<len; ++j) {
            for(i=1; i<cnt; ++i)
                if(sample[j] != strs[i][j]) return res;
            res += sample[j];
        }
        return res;
    }
};
