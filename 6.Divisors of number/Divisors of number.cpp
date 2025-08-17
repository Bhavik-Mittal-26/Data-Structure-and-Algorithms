class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> result; // To store divisors
        for(int i = 1; i <= n; i++) {
            if(n % i == 0) {
                result.push_back(i); // Add divisor to result
            }
        }
        return result; // Return full list of divisors including sq. bracket
    }
};
