#include <iostream>
using namespace std;
int main()
{
    int n;
    int l = 4;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        if (i <= 3)
        {
            for (int j = 1; j <= n - l; j++)
            {
                cout << "  ";
            }
            l--;
        }
        if (i == n)
        {
            for (int j = 1; j <= n - 1; j++)
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