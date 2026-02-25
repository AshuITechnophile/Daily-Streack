#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = n / 2;
    int l = 2;
    for (int i = m + 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= m - i + 1; k++)
        {
            cout << "  ";
        }
        if (i < 3)
        {
            for (int j = 1; j <= m - l; j++)
            {
                cout << "  ";
            }
            l--;
        }
        if (i == (m + 1))
        {
            for (int j = 1; j <= m; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    int p = 2;
    for (int i = 2; i <= m + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= m - i + 1; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= m - p; j++)
        {
            cout << "  ";
        }
        p++;
        if (i == (m + 1))
        {
            for (int j = 1; j <= m; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}