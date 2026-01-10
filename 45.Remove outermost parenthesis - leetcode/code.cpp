#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        int count =0;
        string ans ="";
        for(int i=0;i<s.size();i++){
            
             if(s[i]==')'){count--;}
             if(count!=0){ans.push_back(s[i]);}
             if(s[i]=='('){count++;}
// here for ( we will do +1 and for ) we do -1 , we traveerse the string and if we go from start to end we have to start by 0 , for exapmple (()())(()) in this string we are having the +1 +1 -1 +1-1-1 , now it become 0 so we will remove it .     
        }
        return ans ;
        
    }
};

int main() {
    Solution S;
    string s = "(()())(())";

    string ans = S.removeOuterParentheses(s);
    cout << ans;

    return 0;
}