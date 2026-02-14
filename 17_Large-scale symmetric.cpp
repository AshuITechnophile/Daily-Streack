#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int n = (m + 1) / 2;

    // upper part
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }

        // star
        for (int k = 1; k <= n - i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // lower pattern
    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }

        // star
        for (int k = 1; k <= n - i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}