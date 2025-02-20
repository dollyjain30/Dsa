#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    // int a[n][n];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> a[i][j];
    //     }
    // }
    int a[n][n];
    int minr = 0;
    int maxr = n - 1;
    int maxc = n - 1;
    int minc = 0;
    int count = 1;
    while (minr <= maxr && maxc >= minc)
    {
        for (int j = minc; j <= maxc; j++)
        {
            a[minr][j] = count++;
        }
        minr++;
        if (minr > maxr || minc > maxc)
            break;
        for (int i = minr; i <= maxr; i++)
        {
            a[i][maxc] = count++;
        }
        maxc--;
        if (minr > maxr || minc > maxc)
            break;
        for (int j = maxc; j >= minc; j--)
        {
            a[maxr][j] = count++;
        }
        maxr--;
        if (minr > maxr || minc > maxc)
            break;
        for (int i = maxr; i >= minr; i--)
        {
            a[i][minc] = count++;
        }
        minc++;
        if (minr > maxr || minc > maxc)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        }
}