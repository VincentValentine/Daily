class Solution {
public:
    string addBinary(string a, string b) {
        int i, j, sum = 0;
        string res;
        
        for(i=a.size()-1,j=b.size()-1; i>=0||j>=0; --i,--j) {
            sum += i>=0?a[i]-'0':0;
            sum += j>=0?b[j]-'0':0;
            res = to_string(sum%2)+res;
            sum /= 2;
        }
        return sum==0?res:to_string(sum)+res;
    }
};
