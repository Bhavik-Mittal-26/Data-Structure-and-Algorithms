#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();

        // Step 1: Reverse the entire string
        reverse(s.begin(), s.end());

        string ans = "";

        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') continue;

            string word = "";

            // Step 2: Extract the word
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Step 3: Reverse the word
            reverse(word.begin(), word.end());

            // Step 4: Append to answer
            if (!ans.empty()) ans += " ";
            ans += word;
        }

        return ans;
    }
};
int main() {
    Solution S;
    string s = "hello i am bhavik";

    string result = S.reverseWords(s);  // store return value
    cout << result;

    return 0;
}