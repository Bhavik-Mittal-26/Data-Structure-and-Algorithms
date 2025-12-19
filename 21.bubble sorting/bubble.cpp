#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) { // O(n^2)
    for(int i = 0; i < n - 1; i++) {
        bool isswapped = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isswapped = true;
            }
        }
        if(!isswapped){return;} // Optimization: stop if the array is already sorted
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {3,4,1,2,5};

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}
