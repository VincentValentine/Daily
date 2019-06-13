class Solution {
public:
    int reverse(int x) {
        int pop, ans = 0;
        while(x) {
            pop = x%10;
            x /= 10;
            if(ans>INT_MAX/10 ||(ans==INT_MAX/10&&pop>7)) { ans = 0; break; }
            if(ans<INT_MIN/10 ||(ans==INT_MIN/10&&pop<-8)) { ans = 0; break; }
            ans = ans*10+pop;
        }

        return ans;
    }
};
