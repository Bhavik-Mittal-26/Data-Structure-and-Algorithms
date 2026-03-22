#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m - 1;
        int b = n - 1;
        int c = m + n - 1;

        while (a >= 0 && b >= 0) {
            if (nums1[a] > nums2[b]) {
                nums1[c]=nums1[a];
                a--;
            } else {
                nums1[c]=nums2[b];
                b--;
            }
            c--;
        }

        // if nums2 still has elements
        while (b >= 0) {
            nums1[c]=nums2[b];
            b--;
            c--;
        }
    }
};
int main(){
    Solution s;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m =3;
    int n=3;

    s.merge(nums1,m,nums2,n);

   for(int x : nums1){
        cout << x << " ";
    }
}
