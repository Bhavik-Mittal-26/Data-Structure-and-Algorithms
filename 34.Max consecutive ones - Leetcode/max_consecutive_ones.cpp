#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                currentCount++;                 
                maxCount = max(maxCount, currentCount);
            } else {
                currentCount = 0; // reset when 0 is found
            }
        }

        return maxCount;
    }
};
int main (){
    Solution s;
    vector<int>nums={1,1,0,1,1,0,1,1,1,1,1};
    cout<<s.findMaxConsecutiveOnes(nums);
    return 0;
}