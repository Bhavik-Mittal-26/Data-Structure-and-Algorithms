#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;  // position for next non-zero

        // Step 1: move non-zero elements forward
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }

        // Step 2: fill remaining positions with zero
        while (j < n) {
            nums[j] = 0;
            j++;
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 0, 3, 0, 0};

    s.moveZeroes(nums);   

    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1) cout << ", ";
    }
    cout << "]";

    return 0;
}
