#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    // pre-compute frequency of characters
    int hashArr[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hashArr[s[i] - 'a']++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter " << q << " characters to check frequency:\n";
    while (q--) {
        char c;
        cin >> c;
        cout << "Frequency of '" << c << "' = " << hashArr[c - 'a'] << endl;
    }

    return 0;
}
