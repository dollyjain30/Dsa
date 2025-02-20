#include <iostream>
#include <vector>
using namespace std;
vector<int> dp;
// int fibo(int n)
// {
//     if (n == 0 || n == 1)
//         return n;
//     if (dp[n] != -1)
//         return dp[n];
//     return dp[n] = fibo(n - 1) + fibo(n - 2);
// }
// int f(int n)
// {
//     // dp.clear();
//     dp.resize(n + 1, -1);
//     dp[0] = 0;
//     dp[1] = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         dp[i] = dp[i - 1] + dp[i - 2];
//     }
//     return dp[n];
// }
int f(int n)
{
    int a = 0;
    int b = 1;
    if (n == 0 || n == 1)
        return n;
    int c;
    int i = 2;
    while (i <= n)
    {
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return c;
}
int main()
{
    int n;
    cin >> n;
    // dp.clear();
    // dp.resize(n + 1, -1);
    cout << f(n);

    return 0;
}