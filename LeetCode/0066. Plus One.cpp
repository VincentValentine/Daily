class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i, n = digits.size();
        
        for(i=n-1; i>=0; --i) {
            ++digits[i];
            digits[i] %= 10;
            if(digits[i] != 0) return digits;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
