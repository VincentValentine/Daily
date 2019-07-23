class Solution {
public:
    int trap(vector<int>& height) {
        int i, j, k, res = 0, n = height.size();
        if(n <= 2) return 0;
        stack<int> st;

        for(i=0; i<n; ++i) {
            if(st.empty() || height[i]<=height[st.top()]) st.push(i);
            else {
                while(!st.empty() && height[i]>height[st.top()]) {
                    j = st.top();
                    st.pop();
                    if(!st.empty()) {
                        k = height[i]>height[st.top()]?st.top():i;
                        res += (i-st.top()-1)*(height[k]-height[j]);
                    }
                }
                st.push(i);
            }
        }
        return res;
    }
};
