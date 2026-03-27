class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                if (st.empty()) return false;
                
                char last = st.top();
                if ((c == ')' && last == '(') || 
                    (c == '}' && last == '{') || 
                    (c == ']' && last == '[')) {
                    st.pop(); 
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
