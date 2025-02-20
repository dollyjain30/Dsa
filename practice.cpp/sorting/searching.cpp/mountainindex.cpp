#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int main()
{
    int arr[7] = {1, 3, 5, 4, 3, 2, 0};

    int lo = 1;
    int hi = 5;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            cout << mid;
            break;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return 0;
}