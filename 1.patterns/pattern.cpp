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

// Pattern 8: Hollow square
void print8(int n)
{
    cout << "\nPattern 8: Hollow Square\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// Pattern 9: Hollow right triangle
void print9(int n)
{
    cout << "\nPattern 9: Hollow Right Triangle\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i || i == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// Pattern 10: Inverted hollow triangle
void print10(int n)
{
    cout << "\nPattern 10: Inverted Hollow Triangle\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (i == 0 || j == 0 || j == n - i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// Pattern 11: Diamond
void print11(int n)
{
    cout << "\nPattern 11: Diamond\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << endl;
    }
}

// Pattern 12: Hourglass
void print12(int n)
{
    cout << "\nPattern 12: Hourglass\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < n - i; j++)
            cout << "* ";
        cout << endl;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < n - i; j++)
            cout << "* ";
        cout << endl;
    }
}

// Pattern 13: Number pyramid
void print13(int n)
{
    cout << "\nPattern 13: Number Pyramid\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }
}

// Pattern 14: Butterfly pattern
void print14(int n)
{
    cout << "\nPattern 14: Butterfly Pattern\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << "  ";
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << "  ";
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    cout << "Pattern Program\n";
    print1(n);
    print2(n);
    print3(n);
    print4(n);
    print5(n);
    print6(n);
    print7(n);
    print8(n);
    print9(n);
    print10(n);
    print11(n);
    print12(n);
    print13(n);
    print14(n);
    return 0;
}
