#include <iostream>
using namespace std;
int main()
{
    int n;
    int l = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "   ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (l < 10)
            {
                cout << l << "  "; // extra space for 1 digit
            }
            else
            {
                cout << l << " "; // normal space for 2 digit
            }
            l++;
        }
        cout << endl;
    }
    return 0;
}