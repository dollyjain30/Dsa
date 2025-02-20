#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int ans = 0;
int reverse(int n)
{
    if (n <= 0)
        return ans;
    int digit = n % 10;
    ans = ans * 10 + digit;
    return reverse(n / 10);
}
int main()
{
    int n = 1234;
    cout << reverse(n);
}