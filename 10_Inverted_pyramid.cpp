// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        // star
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << "* ";
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
