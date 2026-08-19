#include <iostream>
using namespace std;

int main() {

    int i, j, n;

    cout << "Enter size: ";
    cin >> n;

    for (i = 1; i <= 2 * n - 1; i++) {

        for (j = 1; j <= 2 * n - 1; j++) {


            if (i == 1) {

                if (j == 1 || j >= n)
                    cout << "* ";
                else
                    cout << "  ";
            }

            else if (i > 1 && i < n) {

                if (j == 1 || j == n)
                    cout << "* ";
                else
                    cout << "  ";
            }

            else if (i == n) {

                cout << "* ";
            }

            else if (i > n && i < 2 * n - 1) {

                if (j == n || j == 2 * n - 1)
                    cout << "* ";
                else
                    cout << "  ";
            }

            else if (i == 2 * n - 1) {

                if (j <= n || j == 2 * n - 1)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}