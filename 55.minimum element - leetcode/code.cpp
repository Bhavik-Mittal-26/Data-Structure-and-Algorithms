#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];}
    
};
int main(){
    Solution s;
    vector<int> nums={8,2,7,3,8,2,4,8,6};
    s.findMin(nums);
    cout<<s.findMin(nums);
    return 0; 
}