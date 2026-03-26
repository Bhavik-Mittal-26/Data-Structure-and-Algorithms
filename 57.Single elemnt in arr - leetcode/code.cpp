#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
int n= nums.size();
        for (int i=0;i<nums.size()-1;i+=2){
       if(nums[i]!=nums[i+1]){
        return nums[i];
       }
        }
        return nums[n-1];
    }
};
int main (){
Solution s;
vector<int> nums={1,1,2,2,5,6,6,8,8};
s.singleNonDuplicate(nums);
cout<<s.singleNonDuplicate(nums);
    return 0;
}