#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int main()
{

    int x = 18;
    int lo = 0;
    int hi = 18;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (mid * mid == x)
        {
            cout << mid;
                }
        else if (mid * mid > x)
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << hi;
    return 0;
}