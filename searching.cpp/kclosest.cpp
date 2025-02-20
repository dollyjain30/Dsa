#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 6};
    int n = 5;
    int x = 5;
    int k = 4; // 4632//
    vector<int> v(k);
    if (arr[0] > x)
    {
        for (int i = 0; i < k; i++)
        {
            v[i] = arr[i];
            cout << v[i];
            break;
        }
    }
    if (arr[n - 1] < x)
    {
        int i = n - 1;
        int j = k - 1;
        while (j >= 0)
        {
            arr[j] = arr[i];
            j--;
            i--;
        }
        for (int i = 0; i < k; i++)
        {
            v[i] = arr[i];
            cout << v[i];
            break;
        }
    }
    int lo = 0;
    int hi = n - 1;
    bool flag = false;
    int t = 0;
    int mid = -1;
    while (lo <= hi)
    {
        mid = lo + (hi - lo) / 2;
        if (arr[mid] == x)
        {
            flag = true;
            arr[t] = arr[mid];
            t++;
            break;
        }
        else if (x > arr[mid])
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    int lb = arr[hi];
    int ub = arr[lo];
    if (flag == true)
    {
        lb = mid - 1;
        ub = mid + 1;
    }
    while (t < k && lb >= arr[0] && ub <= arr[n - 1])
    {
        int d1 = abs(x - arr[lb]);
        int d2 = abs(x - arr[ub]);
        if (d1 <= d2)
        {
            v[t] = arr[lb];
            cout << v[t];
            t++;
            lb--;
        }
        else
        {
            v[t] = arr[ub];
            cout << v[t];
            t++;
            ub++;
        }
    }
    if (lb < 0)
    {
        while (t < k)
        {
            v[t] = arr[ub];
            cout << v[t];
            t++;
            ub++;
        }
    }
    if (ub > n - 1)
    {
        v[t] = arr[lb];
        cout << v[t];
        t++;
        lb--;
    }
}