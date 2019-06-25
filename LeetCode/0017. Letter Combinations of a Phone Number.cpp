class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty()) return res;
        
        string path = "";
        vector<string> letter{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        DFS(digits, path, 0, letter, res);
    
        return res;
    }

    void DFS(string digits, string &path, int pos, vector<string> letter, vector<string> &res) {
        if(pos == digits.size()) {
            res.push_back(path);
            return ;
        }
        for(int i=0; i<letter[digits[pos]-'0'].size(); ++i) {
            path.push_back(letter[digits[pos]-'0'][i]);
            DFS(digits, path, pos+1, letter, res);
            path.pop_back();
        }
    }
};
