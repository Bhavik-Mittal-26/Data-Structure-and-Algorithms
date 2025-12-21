#include <bits/stdc++.h>
using namespace std;

int secondlargest(int arr[], int n) {

    if (n < 2) return -1;   // Edge case

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {

        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? -1 : second;
}

int main() {
    int arr[] = {12, 35,9,78,67,89};
    int n = 6;

    cout << "Answer is " << secondlargest(arr, n);
}
