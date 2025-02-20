#include <iostream>

#include <vector>
using namespace std;
int main()
{
    int a[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    // column wise printing
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int t[2][3];
    // new variable
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t[i][j] = a[j][i];
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}