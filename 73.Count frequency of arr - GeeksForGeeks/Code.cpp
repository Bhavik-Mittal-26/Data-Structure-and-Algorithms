#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int,int> mp;

    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    vector<vector<int>> ans;

    for(auto it : mp) {
        ans.push_back({it.first, it.second});
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }

    return 0;
}