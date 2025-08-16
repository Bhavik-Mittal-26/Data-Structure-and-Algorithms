#include <bits/stdc++.h>
using namespace std;

// Pattern 1: Square of stars
// *****
// *****
// *****
// *****
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 2: Right-angled triangle of stars
// *
// * *
// * * *
void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) // <= lagana hoga
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 3: Right-angled triangle with numbers (0 to j)
// 0
// 0 1
// 0 1 2
void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern 4: Right-angled triangle with same row number
// 0
// 1 1
// 2 2 2
void print4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

// Pattern 5: Inverted triangle of stars
// *****
// ****
// ***
// **
// *
void print5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 6: Inverted triangle with numbers (0 to j)
// 0 1 2 3
// 0 1 2
// 0 1
// 0
void print6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Pattern 7: Pyramid of stars
//     *
//    ***
//   *****
//  *******
// *********
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces before stars
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // spaces after stars (optional)
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print1(n);
    print2(n);
    print3(n);
    print4(n);
    print5(n);
    print6(n);
    print7(n);
    return 0;
}
