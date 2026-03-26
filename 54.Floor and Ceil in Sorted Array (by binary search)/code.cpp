#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size();
        int floorVal = -1, ceilVal = -1;

        int low = 0, high = n - 1;

        // FLOOR (<= x)
        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] <= x) {
                floorVal = nums[mid];
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        low = 0, high = n - 1;

        // CEIL (>= x)
        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] >= x) {
                ceilVal = nums[mid];
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return {floorVal, ceilVal};
    }
};

int main(){
    Solution s;
    vector<int> nums = {3, 4, 4, 7, 8, 10};
    int x = 5;

    vector<int> ans = s.getFloorAndCeil(nums, x);

    cout << ans[0] << " " << ans[1];

    return 0;
}