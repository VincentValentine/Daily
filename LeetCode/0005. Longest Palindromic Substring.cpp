// manacher

class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.size();
        if (size <= 1) return s;
        int mp[2*size]={0}, mx = 2, id = 1, l=1, li = 1;
        for(int i=2; i < 2 * size - l; i++){
            mp[i] = mx > i ? min(mp[2*id - i], mx - i) : 0;
            int left = (i-mp[i]-1)/2, right = (i+mp[i])/2;
            while(left >= 0 && right < size) {
                if(left==right) mp[i]++;
                else if(s[left] == s[right]) mp[i] = mp[i] + 2;
                else break;
                left--; right++;
            }
            if(i+mp[i] > mx){
                mx = i + mp[i];
                id  = i;
            }
            if(mp[i] > l){
                l = mp[i];
                li = i;
            }
        }
        return s.substr((li-l+1)/2, l);
    }
};
