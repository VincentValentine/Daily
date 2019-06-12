class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s; 

        int curRow = 0;
        bool alter = false;
        string res = "";
        vector<string> row(min(int(s.size()), numRows));

        for(char c: s) {
            row[curRow] += c;
            if(curRow==0 || curRow==numRows-1) alter = !alter;
            curRow += alter?1:-1;
        }
        for(string s: row) res += s;

        return res;
    }
};
