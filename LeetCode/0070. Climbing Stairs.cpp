class Solution {
public:
    int climbStairs(int n) {
        vector<int> s{0,1,2};
        
        for(int i=0; i<=n; ++i) 
            if(i > 2) s.push_back(s[i-1]+s[i-2]);
        
        return s[n];
    }
};
