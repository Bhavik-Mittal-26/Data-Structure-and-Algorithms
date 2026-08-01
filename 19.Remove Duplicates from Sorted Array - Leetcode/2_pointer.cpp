#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int i = 0;
    int j = 1;

    while (j < n) {
        if (nums[i] != nums[j]) { // i goes to unique elements
            i++;
            nums[i] = nums[j]; // 
        }
        j++; // it finds the unique elemnts
    }

    cout << i + 1 << endl;

    for (int k = 0; k <= i; k++) {
        cout << nums[k] << " ";
    }

    return 0;
}