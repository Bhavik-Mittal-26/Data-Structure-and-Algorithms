 #include <bits/stdc++.h>
 using namespace std ; 
 
 class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; i--) {
/*-Start from the last digit
-Find the rightmost odd digit
-Return substring from 0 to that index */
            if ((num[i] - '0') % 2 == 1) { 
  //num[i] - '0'  It converts a character digit into an integer digit.
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};
int main (){
    Solution s ;
    string num = {"4668"};
    string ans=s.largestOddNumber(num);
    cout<<ans;
    return 0;
}

