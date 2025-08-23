#include <iostream>
using namespace std;

class Solution {
public:
    void printNumbers(int n) {
        if (n == 0) {
            return; // base case
        }
        printNumbers(n - 1); // pehle chhote number print karega
        cout << n << endl;   // fir current number print karega
    }
};

int main() {
    Solution obj; 
    int n;
    cin >> n;
    obj.printNumbers(n);
    return 0;
}
