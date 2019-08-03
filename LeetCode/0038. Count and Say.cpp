class Solution {
public:
    string countAndSay(int n) {
        int i, j, len, cnt;
        string temp, res = "1";
        
        for(i=1; i<n; ++i) {
            temp = "";
            for(len=res.size(),j=0; j<len; ++j) {
                for(cnt=1; j<len&&res[j]==res[j+1]; ++j,++cnt);
                temp += to_string(cnt)+res[j];
            }
            res = temp;
        }
        
        return res;
    }
};
