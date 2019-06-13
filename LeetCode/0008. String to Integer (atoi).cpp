class Solution {
public:
    int myAtoi(string str) {
        int i, flag, len, ans, pop;
        ans = i = 0, flag = 1, len = str.size();

        while(i<len && isspace(str[i])) ++i;
        if(i == len) return 0;
        if(str[i] == '-') flag = -1;
        else if(isdigit(str[i])) ans = str[i]-'0';
        else if(str[i] != '+') return 0;
        while(++i<len && isdigit(str[i])) {
            pop = (str[i]-'0')*flag;
            if(ans>INT_MAX/10 || (ans==INT_MAX/10&&pop>7)) return INT_MAX;
            if(ans<INT_MIN/10 || (ans==INT_MIN/10&&pop<-8)) return INT_MIN;
            ans = ans*10+pop;
        }

        return ans;
    }
};
