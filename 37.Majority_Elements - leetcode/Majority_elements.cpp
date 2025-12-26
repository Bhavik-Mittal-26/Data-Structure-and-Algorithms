#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // Hash map to store frequency of each number
        unordered_map<int, int> freq;

        int n = nums.size();

        // Traverse the array
        for (int num : nums) {

            // Increase frequency of current number
            freq[num]++;

            // If frequency becomes greater than n/2,
            // this number is the majority element
            if (freq[num] > n / 2) {
                return num;
            }
        }

        // This line will never be reached because
        // problem guarantees that majority element exists
        return -1;
    }
};
int main (){
    Solution s;
    vector<int>nums={2,2,3,1,1,1,1};
    s.majorityElement(nums);
    cout<<s.majorityElement(nums);
    return 0;
}
