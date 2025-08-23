#include <iostream>
using namespace std;

void printName(string name, int n) {
    if (n == 0)  // base case
        return;
    
    cout << n << " - " << name << endl;
    
    printName(name, n - 1); // recursive call
}

int main() {
    string name;
    int times;

    cout << "Enter your name: ";
    cin >> name;
    cout << "How many times to print? ";
    cin >> times;

    printName(name, times);

    return 0;
}
