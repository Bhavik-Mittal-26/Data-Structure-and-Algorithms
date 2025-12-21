#include<bits/stdc++.h>
using namespace std;
 class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for (int i=0 ; i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }   }
        return -1;
    }
};

int main (){
    Solution s;
    vector<int>nums={1,2,3,4,5};
    int target=4;
    s.linearSearch(nums,target);
    cout<<s.linearSearch(nums,target);
    return 0;
}