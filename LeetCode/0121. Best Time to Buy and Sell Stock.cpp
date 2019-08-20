class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, minv = INT_MAX, res = 0;

        for(i=0; i<prices.size(); ++i) {
            minv = min(minv, prices[i]);
            res = max(res, prices[i]-minv);
        }

        return res;
    }
};
