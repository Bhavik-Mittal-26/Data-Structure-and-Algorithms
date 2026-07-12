#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());

        unordered_map<int, int> rank;
        int r = 1;

        for (int x : temp) {
            if (rank.find(x) == rank.end()) {
                rank[x] = r++;
            }
        }

        for (int &x : arr) {
            x = rank[x];
        }

        return arr;
    }
};
int main(){
    Solution s;
    vector<int>arr={37,12,28,9,100,56,80,5,12}; 
   vector<int> ans= s.arrayRankTransform(arr);
   for(int x:ans){
    cout<<x;
   }
    
    return 0;

}