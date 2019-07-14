class Solution {
public:
    int lengthOfLastWord(string s) {
        int start, end = s.size()-1;
        
        while(end>=0 && s[end]==' ') --end; 
        if(end < 0) return 0;
        start = end;
        while(start>=0 && s[start]!=' ') --start;
        return end-start;
    }
};
