#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                if (ans[0] == -1) {
                    ans[0] = i;   
                }
                ans[1] = i;       
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int>nums = {5,7,7,8,8,10};
    int target = 8;
    vector<int> result = s.searchRange(nums, target);

    cout << "[" << result[0] << ", " << result[1] << "]";
    return 0;
}