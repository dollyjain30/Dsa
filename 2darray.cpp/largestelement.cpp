#include <iostream>
#include <climits>
using namespace std;
int main()

{
    int n;

    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    // int max = INT_MIN;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (max < a[i][j])
    //         {
    //             max = a[i][j];
    //         }
    //     }
    // }
    // cout << max;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == n / 2) || (j == n / 2))
            {
                cout << a[i][j] << " ";
            }
            else
            {
                cout << " "
                     << " ";
            }
        }
        cout << endl;
    }
}