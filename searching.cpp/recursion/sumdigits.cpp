#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int sumofdigits(int n)
{
    if (n >= 0 && n <= 9)
        return n;
    int digit = n % 10;
    return digit + sumofdigits(n / 10);
}
int main()
{
    int n = 1234;
    cout << sumofdigits(n);
}