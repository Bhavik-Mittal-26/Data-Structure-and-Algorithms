#include<bits/stdc++.h>
using namespace std;
 class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n); // creates the vector of n size with 0 elemtns and named it as ans 

        int posIndex = 0; // even indices (positive) in that vector
        int negIndex = 1; // odd indices (negative) in that vector

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                ans[posIndex] = nums[i];
                posIndex += 2;
            } else {
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
        }

        return ans;
    }
};
int main (){
    Solution s;
    vector<int> nums={3,1,-2,-5,2,-4};
     vector<int> result = s.rearrangeArray(nums);
    for (int x : result) {
        cout << x << " ";
    }
    return 0;}
