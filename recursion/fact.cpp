#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int fact(int n)
{
    int f = 1;
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    fact(5);
    cout << fact(5);
}