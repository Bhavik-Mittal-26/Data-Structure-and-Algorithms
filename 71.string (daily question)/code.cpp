#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if (s1 == s2) return true;

        if (s1[0] == s2[2] && s1[2] == s2[0] &&
            s1[1] == s2[1] && s1[3] == s2[3])
            return true;

        if (s1[1] == s2[3] && s1[3] == s2[1] &&
            s1[0] == s2[0] && s1[2] == s2[2])
            return true;

        if (s1[0] == s2[2] && s1[2] == s2[0] &&
            s1[1] == s2[3] && s1[3] == s2[1])
            return true;

        return false;
    }
};

int main (){
    Solution s;
    string s1="abcd";
    string s2="cdab";
    s.canBeEqual(s1,s2);
    cout<<s.canBeEqual(s1,s2);
    return 0;
}