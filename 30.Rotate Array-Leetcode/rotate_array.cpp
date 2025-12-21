#include<bits/stdc++.h>
using namespace std;
 class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;
        k = k % n;  // handle k > n
        /*🔁 Example 1: k > n
nums = [1, 2, 3, 4, 5]
n = 5
k = 7

What does rotating by 7 mean?
Rotate by 5 → same array
Rotate by remaining 2 → actual effect*/
        
            reverse(nums.begin() , nums.end());
            reverse(nums.begin(),nums.begin()+k);
            reverse(nums.begin()+k,nums.end());
        
        
    }
};

int main(){
    Solution s;
    vector<int>nums={1,2,3,4,5};
    int k = 3;
    s.rotate(nums,k);
    for(auto x : nums ){
        cout<<x<<" "; 
    }
    return 0;

}