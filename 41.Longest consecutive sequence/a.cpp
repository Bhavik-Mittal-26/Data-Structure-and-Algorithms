#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // If array is empty, no sequence possible
        if (nums.size() == 0) return 0;

        // Step 1: Sort the array
        // This helps us check consecutive numbers easily
        sort(nums.begin(), nums.end());

        // longest -> stores the maximum length found so far
        int longest = 1;

        // current -> stores the length of the current consecutive sequence
        int current = 1;

        // Step 2: Traverse the array from second element
        for (int i = 1; i < nums.size(); i++) {

            // Case 1: Duplicate element
            // Example: [1, 2, 2, 3]
            // We skip duplicates because they don't increase sequence length
            if (nums[i] == nums[i - 1]) {
                continue;
            }

            // Case 2: Consecutive number found
            // Example: 2 follows 1, or 3 follows 2
            else if (nums[i] == nums[i - 1] + 1) {
                current++; // extend current sequence
            }

            // Case 3: Sequence breaks
            // Example: 4 -> 10 (not consecutive)
            else {
                // Update longest sequence length
                longest = max(longest, current);

                // Reset current sequence length
                current = 1;
            }
        }

        // Final check in case the longest sequence ends at the last element
        return max(longest, current);
    }
};
int main(){
    Solution s;
    vector<int>nums = {1,2,34,3,6,76,5};
    cout<<s.longestConsecutive(nums);
return 0;



}