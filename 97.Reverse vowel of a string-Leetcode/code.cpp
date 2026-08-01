#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    string vowels = "aeiouAEIOU";

    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
        if (vowels.find(s[i]) == string::npos) {
            i++;
        }
        else if (vowels.find(s[j]) == string::npos) {
            j--;
        }
        else { // for vowels 
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    cout << s;

    return 0;
}