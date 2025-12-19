#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        // length check
        if (s.length() != t.length())
            return false;

        int freq[26] = {0}; //hash table

        for (int i = 0; i < s.length(); i++) {

            freq[s[i] - 'a']++; // ascii value of a=97 , so let suppose s[i] is b then b-a, ie 98-97
                                 //                                                         =1   
                                 // Increase count for character from string s
            // Example: if s[i] = 'c' → index = 'c' - 'a' = 2     

            freq[t[i] - 'a']--;  // Decrease count for character from string t
            // This cancels out if both strings have same characters
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
}; 

int main() {
    Solution obj;

    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    if (obj.isAnagram(s, t)) {
        cout << "Valid Anagram\n";
    } else {
        cout << "Not an Anagram\n";
    }

    return 0;
}
