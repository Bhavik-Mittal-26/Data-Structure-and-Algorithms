#include <iostream>
using namespace std;

class Solution {
public:
    void reverseArray(int i, int arr[], int n) {
        if (i >= n / 2)  
            return;
        swap(arr[i], arr[n - i - 1]);
        reverseArray(i + 1, arr, n); // recursive call
    }
};

int main() {
    int n;
    cout<<"enter the number"<<endl;
    cin >> n;
    
    int arr[n]; 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    obj.reverseArray(0, arr, n);  // correct function call

    // Print reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
