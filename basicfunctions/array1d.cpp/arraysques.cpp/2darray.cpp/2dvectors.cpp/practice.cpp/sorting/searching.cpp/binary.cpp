#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int main()
{
    int arr[9] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int x = 20;
    int lo = 0;
    int hi = 8;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == x)
        {
            cout << arr[mid - 1];
            flag = true;
            break;
        }
        else if (arr[mid] < x)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    if (flag == false)
    {
        cout << arr[hi];
    }
    return 0;
}