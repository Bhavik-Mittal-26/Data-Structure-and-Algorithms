 #include <bits/stdc++.h>
 using namespace std ; 
 
 class Solution {
public:
    string largestOddNumber(string num) {
         string ans = "";
    for (int i = 0; i < num.size(); i++) {
        if ((num[i] - '0') % 2 == 1) {
            ans = num.substr(0, i + 1);
        }
    }
    return ans;
}
    
};
int main (){
    Solution s ;
    string num = {"4568"};
    string ans=s.largestOddNumber(num);
    cout<<ans;
    return 0;
}

