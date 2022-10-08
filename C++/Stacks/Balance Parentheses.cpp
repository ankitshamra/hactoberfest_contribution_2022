class Solution {
public:
    unordered_map<char, char> converse {
        {'{', '}'},
        {'[', ']'},
        {'(', ')'}
    };
    
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++)
            st.size() > 0 and converse[st.top()] == s[i] ? st.pop() : st.push(s[i]);
        return !st.size();
    }
};
