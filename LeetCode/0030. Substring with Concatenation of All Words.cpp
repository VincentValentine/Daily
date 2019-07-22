class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int i, j, n = s.size(), num = words.size(), len;
        vector<int> res;
        if(!num || !n) return res;
        len = words[0].size();
        string word; 
        unordered_map<string, int> mp;

        for(string word: words) ++mp[word];
        for(i=0; i<=n-num*len; ++i) {
            unordered_map<string, int> temp;
            for(j=0; j<num; ++j) {
                word = s.substr(i+j*len, len);
                if(mp.find(word) != mp.end()) ++temp[word];
                else break;
                if(temp[word] > mp[word]) break;
            }
            if(j == num) res.push_back(i);
        }

        return res;
    }
};
