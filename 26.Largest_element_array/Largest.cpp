#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];   // assume first element is largest

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > largest) {
                largest = nums[i];
            }
        }
        return largest;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3, 5, 1, 9, 2};
    cout << s.largestElement(nums);
    return 0;
}
