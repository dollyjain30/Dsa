#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter the rows of the first matrix:";
    cin >> m;
    int n;
    cout << "enter the columns of the first matrix:";
    cin >> n;
    int p;
    cout << "enter the rows of the second matrix:";
    cin >> p;
    int q;
    cout << "enter the columns of the second matrix:";
    cin >> q;
    if (n == p)
    {
        int a[m][n];
        int b[p][q];
        cout << "enter the elements of first matrix:";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "enter the elements of second matrix:";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }

        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "matrices cannot be multiply";
    }
}