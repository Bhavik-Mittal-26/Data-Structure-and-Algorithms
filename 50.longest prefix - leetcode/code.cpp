
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> &arr) {
        int n = arr.size();
        if (n == 0) return "";

        string ans = "";

        for (int i = 0; i < arr[0].length(); i++) {
            char ch = arr[0][i];
            bool match = true;

            for (int j = 1; j < n; j++) {
                if (arr[j].length() <= i || arr[j][i] != ch) {
                    match = false;
                    break;
                }
            }

            if (!match) break;
            ans.push_back(ch);
        }

        return ans;
    }
};
int main (){
    Solution s;
    vector<string> arr={"flower","flow","flight"};
    cout<<s.longestCommonPrefix(arr);

}