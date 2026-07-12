#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binaryToDecimal(string &b) {
        int sum = 0;
        int power = 0;

        for (int i = b.size() - 1; i >= 0; i--) {
            sum += (b[i] - '0') * pow(2, power);
            power++;
        }

        return sum;
    }
};

int main() {
    Solution obj;

    string b;
    cout << "Enter a binary number: ";
    cin >> b;

    cout << obj.binaryToDecimal(b) << endl;

    return 0;
}