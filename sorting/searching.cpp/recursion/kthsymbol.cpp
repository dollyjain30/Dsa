#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int kthgrammer(int n, int k)
{
    if (n == 1)
        return 0;
    if (k % 2 == 0)
    {
        int ans = kthgrammer(n - 1, k / 2);
        if (ans == 0)
            return 1;
        else
            return 0;
    }
    else
    {
        return kthgrammer(n - 1, k / 2 + 1);
    }
}
int main()
{
    int n = 4;
    int k = 6;
    cout << kthgrammer(n, k);
}