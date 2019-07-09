class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int a, b, c, i, n = tokens.size();
        stack<int> st;

        for(i=0; i<n; ++i) {
            if(tokens[i] == "+") { b = st.top(); st.pop(); a = st.top(); st.pop(); st.push(a+b); }
            else if(tokens[i] == "-") { b = st.top(); st.pop(); a = st.top(); st.pop(); st.push(a-b); }
            else if(tokens[i] == "*") { b = st.top(); st.pop(); a = st.top(); st.pop(); st.push(a*b); }
            else if(tokens[i] == "/") { b = st.top(); st.pop(); a = st.top(); st.pop(); st.push(a/b); }
            else st.push(atoi(tokens[i].c_str()));
        }

        return st.top();
    }
};
