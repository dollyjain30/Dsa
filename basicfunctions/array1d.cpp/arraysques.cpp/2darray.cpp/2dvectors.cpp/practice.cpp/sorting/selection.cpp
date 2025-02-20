#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {6, 4, 3, 2, 1, 5};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int min = INT_MAX;
    //     int mindex = -1;
    //     for (int j = i; j < n; j++)
    //     {
    //         if (arr[j] < min)
    //         {
    //             min = arr[j];
    //             mindex = j;
    //         }
    //     }
    //     swap(arr[i], arr[mindex]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int minindex = -1;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// min element in the array then swap minindex and current i//
