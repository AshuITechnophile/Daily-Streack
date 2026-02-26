#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = n / 2;
    // Upper Half
    for (int i = 1; i <= m + 1; i++)
    {
        // outer spaces
        for (int j = 1; j <= m - i + 1; j++)
        {
            cout << "   ";
        }
        cout << "* ";
        if (i > 1)
        {
            // inner spaces
            for (int j = 1; j <= 2 * i - 3; j++)
            {
                cout << "   ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    // Lower Half
    for (int i = m; i >= 1; i--)
    {
        // outer spaces
        for (int j = 1; j <= m - i + 1; j++)
        {
            cout << "   ";
        }
        cout << "* ";
        if (i > 1)
        {
            // inner spaces
            for (int j = 1; j <= 2 * i - 3; j++)
            {
                cout << "   ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
