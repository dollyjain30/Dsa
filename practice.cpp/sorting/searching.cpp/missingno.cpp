#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int main()
{
    int arr[8] = {0, 1, 2, 4, 5, 6, 7, 8};
    int ans = -1;
    int lo = 0;
    int hi = 7;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == mid)
        {
            lo = mid + 1;
        }
        else
        {
            ans = mid;
            hi = mid - 1;
        }
    }
    cout << ans;
    return 0;
}