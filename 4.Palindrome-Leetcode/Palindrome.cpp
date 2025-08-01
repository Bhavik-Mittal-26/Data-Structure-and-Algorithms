class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; // negative numbers are not palindromes

        int original = x;
        long long reversenum = 0;

        while (x > 0) {
            int lastnum = x % 10;
            reversenum = (reversenum * 10) + lastnum;
            x = x / 10;
        }

        return reversenum == original;
    }
};
