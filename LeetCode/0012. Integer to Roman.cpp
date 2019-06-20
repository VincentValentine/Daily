class Solution {
public:
    string intToRoman(int num) {
        int cnt = 0;
        string ans = "";
        string table[4][10] = {
            {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
            {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
            {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
            {"", "M", "MM", "MMM"},
        };
        
        while(num != 0) {
            ans = table[cnt++][num%10]+ans;
            num /= 10;
        }

        return ans;
    }
};
