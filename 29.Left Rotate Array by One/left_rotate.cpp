#include <bits/stdc++.h>
using namespace std;
 class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return;
    int last = nums[n - 1]; 
    for (int i = n - 1; i > 0; i--)
    /*we have used the opposite loop as by normal the values got overwrite 
    | Step | Array               |
| ---- | ------------------- |
| i=0  | [1, **1**, 3, 4, 5] |
| i=1  | [1, 1, **1**, 4, 5] |
| i=2  | [1, 1, 1, **1**, 5] |
| i=3  | [1, 1, 1, 1, **1**] | */
 {
    nums[i] = nums[i - 1];  
        }
       nums[0] = last; 
    }
};
int main(){
    Solution s ;
    vector<int>nums = {1,2,3,4,5};
    int n = 5;
     s.rotateArrayByOne(nums);   // function call

    // print rotated array
    for (int x : nums) {
        cout << x << " ";
    }
}


