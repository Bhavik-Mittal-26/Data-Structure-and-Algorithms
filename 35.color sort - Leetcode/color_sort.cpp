#include <bits/stdc++.h>
using namespace std;
 class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            sort(nums.begin(),nums.end());
            return ;
        }
        
    }
    
};

int main(){
    Solution s;
    
    vector<int>nums={0,3,2,4,1,0};
    s.sortColors(nums);
    
 for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}