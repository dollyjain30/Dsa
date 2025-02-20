#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "enter the rows of the first matrix:";
    cin >> n;

    int a[n][n];
    cout << "enter the columns of the first matrix:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    cout << "transpose of the matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    // column wise reverse//
    for (int k = 0; k < n; k++)
    {
        int i = 0;
        int j = n - 1;
        while (i <= j)
        {
            int temp = a[i][k];
            a[i][k] = a[j][k];
            a[j][k] = temp;
            i++;
            j--;
        }
    }
    cout << "anticlockwise rotation" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
