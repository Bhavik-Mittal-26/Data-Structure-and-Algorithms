#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    unordered_map<int,int> mp;

    int climbStairs(int n) {

        if(mp.find(n) != mp.end())
            return mp[n];

        if(n == 1 || n == 2)
            return n;

        mp[n] = climbStairs(n-1) + climbStairs(n-2);

        return mp[n];
    }
};
int main(){
    Solution s;
    int n =2;
    s.climbStairs(n);
    cout<<s.climbStairs(n);
    return 0;
}