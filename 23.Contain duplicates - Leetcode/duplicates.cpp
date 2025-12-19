#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution { //O(n) approach
public:
    bool containsDuplicate(vector<int>& nums) {
        
        // unordered_set is a hash-based container
        // It stores unique elements only
        unordered_set<int> seen;

        // Loop through each element in the array
        for (int x : nums) {

            // seen.count(x) checks:
            // → returns 1 if x already exists in the set
            // → returns 0 if x does NOT exist
            if (seen.count(x)) {
                // If x is already present, duplicate found
                return true;
            }

            // If x is not present, insert it into the set
            seen.insert(x);
        }

        // If loop finishes and no duplicates found
        return false;
    }
};

int main() {
    Solution sol;

    // Example input
    vector<int> nums = {1, 2, 3, 4, 1};

    // Call the function
    bool result = sol.containsDuplicate(nums);

    // Print result
    if (result) {
        cout << "Duplicate exists" << endl;
    } else {
        cout << "No duplicates" << endl;
    }

    return 0;
}


/* o(n^2) approach 
bool containsDuplicate(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
} 
*/