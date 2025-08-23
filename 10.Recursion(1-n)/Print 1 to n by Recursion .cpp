#include <iostream>
using namespace std;

class Solution {
public:
    void printNumbers(int n) {
        if (n == 0) {
            return; // base case
        }
        printNumbers(n - 1);  // for  n to 1 we will first cout then fuction 
        cout << n << endl;   
    }
};

int main() {
    Solution obj; 
    int n;
    cin >> n;
    obj.printNumbers(n);
    return 0;
}
