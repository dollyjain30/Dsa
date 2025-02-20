#include <iostream>
#include <climits>
using namespace std;
int main()

{
    int m, n;
    cin >> m;
    cin >> n;
    int a[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum;
    int index = -1;
    int max = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        if (max < sum)
        {
            max = sum;
            index = i;
        }
    }
    cout << max << endl;
    cout << "row number is:" << index + 1;
}