//we are using this only for positive numbers , if nunmbers are negative then this approch fails


#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> &a, long long k) {
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();

    while (right < n) {
        // shrink window if sum > k
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // check if sum == k
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        // move right
        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;
}

int main() {
    vector<int> a = {10, 5, 2, 7, 1, 9};
    long long k = 15;

    int ans = longestSubarrayWithSumK(a, k);
    cout << ans;

    return 0;
}