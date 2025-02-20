#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < 3; j++)
    {
        if (j % 2 == 0)
        {

            for (int i = 0; i < 3; i++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (int i = 2; i >= 0; i--)
            {
                cout << a[i][j] << " ";
            }
        }
    }
}