class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n, left, right, mid, i, j;
        if(!m) return false;
        n = matrix[0].size(), left = 0, right = m*n;

        while(left < right) {
            mid = left+(right-left)/2, i = mid/n, j = mid%n;
            if(target == matrix[i][j]) return true;
            else if(target > matrix[i][j]) left = mid+1;
            else right = mid;
        }
        return false;
    }
};
