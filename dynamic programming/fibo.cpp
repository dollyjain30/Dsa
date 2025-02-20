#include <iostream>
#include <vector>
using namespace std;
// dynamic programming
vector<int> dp;
// top down
int f(int n)
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != -1)
        return dp[n]; // check to identify if problem was already solved earlier
    return dp[n] = f(n - 1) + f(n - 2);
}
int main()
{
    int n;
    cin >> n;
    dp.clear();
    dp.resize(n + 1, -1);
    cout << f(n);
    return 0;
}
