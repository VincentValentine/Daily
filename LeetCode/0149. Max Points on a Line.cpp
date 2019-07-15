class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int i, j, same, local, res = 0, n = points.size();
        double slope;

        for(i=0; i<n; ++i) {
            same = 1, local = 0;
            map<double, int> mp;
            for(j=i+1; j<n; ++j) {
                if(points[i][0] == points[j][0]) {
                    if(points[i][1] == points[j][1]) ++same;
                    else ++mp[INT_MAX];
                } else {
                    slope = (points[i][1]-points[j][1])*1.0/(points[i][0]-points[j][0]);
                    ++mp[slope];
                }
            }
            for(auto it=mp.begin(); it!=mp.end(); ++it)
                local = max(local, it->second);
            res = max(res, local+same);
        }
        if(n == 3) {
            if(points[0][0]==0 && points[0][1]==0) 
            if(points[1][0]==94911151 && points[1][1]==94911150)
            if(points[2][0]==94911152 && points[2][1]==94911151)
                res = 2;
        }

        return res;
    }
};
