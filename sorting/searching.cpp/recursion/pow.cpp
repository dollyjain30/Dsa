#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int power(int x, int n)
{
    if (n == 1)
        return x;
    int ans = power(x, n / 2);
    if (n % 2 == 0)
        return ans * ans;
    else
        return ans * ans * x;
}
int main()
{
    power(3, 5);
    cout << power(3, 5);
}