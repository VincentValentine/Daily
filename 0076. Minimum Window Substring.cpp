class Solution {
public:
    string minWindow(string s, string t) {
        int i, j, minLen, cnt, ns = s.size(), nt = t.size();
        string res;
        unordered_map<char, int> mps, mpt;
        if(!ns || !nt) return res;

        for(i=0; i<nt; ++i) ++mpt[t[i]];
        for(i=j=cnt=0, minLen=INT_MAX; j<ns; ++j) {
            ++mps[s[j]];
            if(mps[s[j]] <= mpt[s[j]]) ++cnt;
            while(cnt == nt) {
                if(mps[s[i]] == mpt[s[i]]) {
                    if(minLen > j-i+1) {
                        minLen = j-i+1;
                        res = s.substr(i, minLen);
                    }
                    break;
                } else {
                    if(mpt.count(s[i])) --mps[s[i]];
                    ++i;
                }
            }
        }
        return res;
    }
};
