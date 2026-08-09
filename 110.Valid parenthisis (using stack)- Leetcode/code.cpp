class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '{' || s[i] == '(' || s[i] == '[') {

                st.push(s[i]);
            }

            // Otherwise, current character is a closing bracket
            else {

                // If stack is empty, there is no opening bracket
                // to match the current closing bracket
                if(st.empty()) {
                    return false;
                }

                // Get the top opening bracket
                char ch = st.top();

                
                if((s[i] == '}' && ch != '{') ||
                   (s[i] == ')' && ch != '(') ||
                   (s[i] == ']' && ch != '[')) {

            
                    return false;
                }

                // Matching pair found, so remove opening bracket
                st.pop();
            }
        }

        // If stack is empty, every bracket was matched
        return st.empty();
    }
};