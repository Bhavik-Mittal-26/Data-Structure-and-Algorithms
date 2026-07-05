#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long long ans = 0;
        int sign = 1;

        
        while (i < s.size() && s[i] == ' ')
            i++;

        if (i < s.size()) {
            if (s[i] == '-') {
                sign = -1;
                i++;
            }
            else if (s[i] == '+') {
                i++;
            }
        }

        while (i < s.size()) {
            if (s[i] >= '0' && s[i] <= '9') {
                ans = ans * 10 + (s[i] - '0');

                if (sign == 1 && ans > INT_MAX)
                    return INT_MAX;

                if (sign == -1 && -ans < INT_MIN)
                    return INT_MIN;
            }
            else {
                break;
            }

            i++;
        }

        return sign * ans;
    }
};

int main() {
    Solution obj;

    string s;
    getline(cin, s);

    cout << obj.myAtoi(s);

    return 0;
}