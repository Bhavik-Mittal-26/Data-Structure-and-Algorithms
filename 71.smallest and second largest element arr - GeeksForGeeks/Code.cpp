#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[0]) {
            cout << arr[0] << " " << arr[i];
            return 0;
        }
    }

    cout << -1;

    return 0;
}