#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
void printsum(int a, int b, int &sum)
{
    if (a > b)
        return;
    if (a == b)
    {
        if (a % 2 != 0)
            sum += a;
        return;
    }
    if (a % 2 != 0)
    {
        sum += a;
        printsum(a + 2, b, sum);
    }
    else
    {
        printsum(a + 1, b, sum);
    }
}
int main()
{
    int a, b;
    cin >> a >> b;

    int sum = 0;
    printsum(a, b, sum);
    cout << sum;
}