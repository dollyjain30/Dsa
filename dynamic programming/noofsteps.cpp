#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define inf INT_MAX
using namespace std;
vector<int> dp;
int f(int n)
{
    if (n == 1)  return 0;
    if (n == 2 || n == 3)return 1;
    return 1 + min({f(n - 1), (n % 2 == 0) ? f(n / 2) : inf, (n % 3 == 0) ? f(n / 3) : inf});
}

int ftd(int i)
{
    if (i == 1) return 0;
    if (i == 2 || i == 3)return 1;
    if (dp[i] != -1)return dp[i];
    return dp[i] = 1 + min({ftd(i - 1), (i % 2 == 0) ? ftd(i / 2) : inf, (i % 3 == 0) ? ftd(i / 3) : inf});
}
int fbu(int n)
{
    dp.clear();
    dp.resize(n + 1, -1);
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for (int i = 4; i <= n; i++)
    {
        dp[i] = 1 + min({dp[i - 1], (i % 2 == 0) ? dp[i / 2] : inf, (i % 3 == 0) ? dp[i / 3] : inf});
    }
    return dp[n];
}
int main()
{
    int n;
    dp.clear();
    dp.resize(n, -1);
    cin >> n;
    cout << ftd(n);
    return 0;
}