#include <iostream>
#include <vector>
using namespace std;
int main()

{
    // int m, n;
    // cin >> m;
    // cin >> n;
    // int a[m][n];
    // int b[m][n];

    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> a[i][j];
    //     }
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (a[i][j] == 0)
    //         {
    //             for (int t = 0; t < m; t++)
    //             {
    //                 b[t][j] = 0;
    //             }
    //             for (int p = 0; p < n; p++)
    //             {
    //                 b[i][p] = 0;
    //             }
    //         }
    //         else
    //         {
    //             if (b[i][j] == 0)
    //                 continue;
    //             else
    //                 b[i][j] = a[i][j];
    //         }
    //     }
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << b[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<int> row(m, 0);
    vector<int> col(n, 0);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                a[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
