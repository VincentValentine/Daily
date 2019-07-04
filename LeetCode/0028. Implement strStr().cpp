class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.size();
        const int n = m+1;
        int next[n];

        getNext(needle, next);
        return KMP(haystack, needle, next);
    }

    void getNext(string p, int next[]) {
        int i, j, pLen;
        i = 0, j = next[0] = -1, pLen = p.size();

        while(i < pLen) {
            if(j==-1 || p[i]==p[j]) { ++i; ++j; next[i] = j; }
            else j = next[j];
        } 
    }
    
    int KMP(string t, string p, int next[]) {
        int i, j, tLen, pLen;
        i = j = 0, tLen = t.size(), pLen = p.size();

        while(i<tLen && j<pLen) {
            if(j==-1 || t[i]==p[j]) { ++i; ++j; }
            else j = next[j];
        }

        if(j == pLen) return i-j;
        return -1;
    }
};
