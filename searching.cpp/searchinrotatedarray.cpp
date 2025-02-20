#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {6, 8, 20, 28, 33, 1, 3, 4, 5};
    int n = 9;
    int target = 28;
    int lo = 0;
    int hi = n - 1;
    int pivot = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1])
        {
            pivot = mid;
            // cout << mid;
            break;
        }
        else if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            pivot = mid + 1;
            // cout << mid;
            break;
        }
        else if (arr[mid] > arr[hi])
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    if (target >= arr[0] && target <= arr[pivot - 1])
    {
        lo = 0;
        hi = pivot - 1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] == target)
            {
                cout << mid;
                break;
            }
            else if (target < arr[mid])
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
    }
    else
    {
        lo = pivot;
        hi = n - 1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid] == target)
            {
                cout << mid;
                break;
            }
            else if (target < arr[mid])
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
    }
}