#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size())
            return false;

        if (s == goal)
            return true;

        for (int i = 0; i < s.size(); i++) {
            char ch = s[0];
            s.erase(s.begin());
            s.push_back(ch);

            if (s == goal)
                return true;
        }

        return false;
    }
};
int main(){
    Solution obj;
    string s="abcde";
    string goal="cdeab";
   bool a=obj.rotateString(s,goal);
   cout<<a;


    return 0;
}
