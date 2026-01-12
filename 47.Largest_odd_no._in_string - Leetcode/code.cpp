#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; i--) {
             /*Start from the last digit

Find the rightmost odd digit

Return substring from 0 to that index */
            if ((num[i] - '0') % 2 == 1) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};
int main(){
    Solution s;
    string num = "5257578644";
    s.largestOddNumber(num);
    cout<<s.largestOddNumber(num);
    return 0;
}
