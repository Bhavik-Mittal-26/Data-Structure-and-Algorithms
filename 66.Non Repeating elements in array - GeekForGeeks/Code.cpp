#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    bool found = false;

    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == 1) {
            cout << "First non-repeating element is: " << arr[i] << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "0" << endl;
    }

    return 0;
}
// O(n2)
/*  #include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count == 1) {
            cout << "First non-repeating element is: " << arr[i];
            return 0;
        }
    }

    cout << "0";

    return 0;
}*/