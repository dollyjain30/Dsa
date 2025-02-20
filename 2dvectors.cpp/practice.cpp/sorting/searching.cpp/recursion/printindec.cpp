#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
// int decreasing(int n)
// {
//     if (n == 0)
//         return 0;
//     cout << n;
//     return decreasing(n - 1);
// }
// int increaing(int x)
// {
//     if (x == 0)
//         return 0;
//     increaing(x - 1);
//     cout << x;
// }
int fun(int i, int n)
{
    if (i > n)
        return 0;
    cout << i;
    fun(i + 1, n);
    if (i > 1)
        cout << i - 1;
}
int main()
{
    // increaing(4);
    // decreasing(3);
    fun(1, 4);
}