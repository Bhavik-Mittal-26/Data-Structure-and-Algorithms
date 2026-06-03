// arr = [1, 2, 3, 4, 5], d = 2
//
// Reverse first d elements:
// [1, 2, 3, 4, 5] -> [2, 1, 3, 4, 5]
//
// Reverse remaining elements:
// [2, 1, 3, 4, 5] -> [2, 1, 5, 4, 3]
//
// Reverse entire array:
// [2, 1, 5, 4, 3] -> [3, 4, 5, 1, 2]
//
// Final Answer:
// [3, 4, 5, 1, 2]

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Since the array is circular, rotating by n positions
    // results in the original array. Hence, rotating by d
    // positions is the same as rotating by (d % n).
    d %= n;

    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// Since the array is circular, rotating by n positions
// brings the array back to its original state.
// Therefore, rotating by d positions is equivalent to
// rotating by (d % n) positions.
//
// Example:
// n = 5, d = 9
// 9 % 5 = 4
// So rotating by 9 positions gives the same result
// as rotating by 4 positions.
