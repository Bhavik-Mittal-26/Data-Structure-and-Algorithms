/*class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return nums[i];   
                }
            }
        }
        return -1; 
    }
};*/
#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) return num;
            seen.insert(num);
        }
        return -1;
    }
};

int main (){
    Solution s;
    vector<int>nums={1,2,3,3,4};
    s.repeatedNTimes(nums);
    cout<<s.repeatedNTimes(nums);

}