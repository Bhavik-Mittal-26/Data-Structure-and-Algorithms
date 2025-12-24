#include<bits/stdc++.h>
using namespace  std;
 class Solution {
public:

    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i =0;i<nums.size();i++){
            ans^=nums[i]; //xor operation as if same tne 0 , if difffrent then 1 
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int>nums={2,3,3,1,1};
   
    s.singleNumber(nums);
    cout<<s.singleNumber(nums);



    return 0;

    
}