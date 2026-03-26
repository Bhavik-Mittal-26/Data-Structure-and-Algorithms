#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> merged;
        for(int x : nums1){ merged.push_back(x);}
        for(int x : nums2) {merged.push_back(x);}
        sort(merged.begin(), merged.end());
        int n = merged.size();
        if(n % 2 == 1) {
            return merged[n/2];
        } else {
            return (merged[n/2 - 1] + merged[n/2]) ;
        }
    }
};
int main(){
Solution s;
vector<int> nums1 ={1,2,3,4,5};
vector<int> nums2={5,7};
s.findMedianSortedArrays(nums1 , nums2);
cout<<s.findMedianSortedArrays(nums1,nums2);


    return 0;
}