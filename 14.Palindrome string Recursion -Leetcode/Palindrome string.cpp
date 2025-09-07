class Solution {	
public:		
    bool isPalindrome(string& s) {
     string filtered = "";
        
        // Filter only alphanumeric characters and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {       //isalnum() is a C++ function that checks whether a                                               character is alphanumeric.
                filtered += tolower(c);
            }
        }        // we have used this cell as i was getting error in test cases
        
        int n = filtered.length();
        for (int i = 0; i < n / 2; ++i) {
            if (filtered[i] != filtered[n - i - 1]) {
                return false;
            }
        }
        
        return true;
    }
};
