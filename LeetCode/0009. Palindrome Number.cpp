class Solution {
public:
    bool isPalindrome(int x) {
        int i;
        bool flag = true;
        string s = to_string(x);

        for(i=0; i<s.size()/2; ++i) {
            if(s[i] != s[s.size()-i-1]) {
                flag = false;
                break;
            }
        }

        return flag;
    }
};
