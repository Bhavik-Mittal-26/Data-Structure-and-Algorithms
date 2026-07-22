#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0;
        int maxSum=INT_MIN;
        for(int i =0;i<nums.size();i++){
            currSum+=nums[i];
            maxSum=max(currSum,maxSum);
            if(currSum<0)currSum=0;   // in kadane algo the negative sum is assigned 0
        }
        return maxSum;
    }
};
int main (){
    Solution s;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
   int max= s.maxSubArray(nums);
cout<<max;
    return 0;
}