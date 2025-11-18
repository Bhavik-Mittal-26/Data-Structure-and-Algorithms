#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute hash
    int hashArr[13] = {0};
    for (int i = 0; i < n; i++) {
        hashArr[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter " << q << " numbers to check frequency:\n";
    while (q--) {
        int number;
        cin >> number;
        cout << "Frequency of " << number << " = " << hashArr[number] << endl;
    }

    return 0;
}
