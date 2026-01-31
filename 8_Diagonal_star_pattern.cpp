// // *        *
//      *   *
//        *
//      *   *
//    *        *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        else if (i == 2 || i == 4)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 2 || j == 4)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        else if (i == (n + 1) / 2)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 3)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}