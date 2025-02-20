#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
bool ispowerof2(int n)
{
    if (n == 1)
        return true;
    if (n % 2 != 0)
        return false;
    return ispowerof2(n / 2);
}
int main()
{
    int n = 64;
    cin >> n;
    cout << ispowerof2(n);
}