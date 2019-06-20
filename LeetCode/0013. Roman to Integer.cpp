class Solution {
public:
    int romanToInt(string s) {
        int i, res;
        map<char, int> mp { 
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        res = mp[s.back()];
        for(i=s.size()-2; i>=0; --i) 
            res += mp[s[i]]<mp[s[i+1]]?-mp[s[i]]:mp[s[i]];
        
        return res;
    }
};
