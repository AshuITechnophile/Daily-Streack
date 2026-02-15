#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        if (i == n)
        {
            for (int j = 1; j <= n - 1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            // space
            for (int k = 1; k <= n - i - 1; k++)
            {
                cout << " ";
            }
            for (int j = 1; j <=    i; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}