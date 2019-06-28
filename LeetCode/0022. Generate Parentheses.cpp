class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string ans = "";
        vector<string> res;
        
        DFS(res, ans, 0, 0, n);

        return res;
    }

    void DFS(vector<string> &res, string ans, int left, int right, int n) {
        if(ans.size() == 2*n) {
            res.push_back(ans);
            return ;
        } 
        if(left < n) DFS(res, ans+'(', left+1, right, n);
        if(right < left) DFS(res, ans+')', left, right+1, n);
    }
};
