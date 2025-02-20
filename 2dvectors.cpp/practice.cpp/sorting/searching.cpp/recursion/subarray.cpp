#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
void subarray(vector<int> v, int a[], int n, int idx)
{
    if (idx == n)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        cout << endl;
        return;
    }
    subarray(v, a, n, idx + 1);
    if (v.size() == 0)
    {
        v.push_back(a[idx]);
        subarray(v, a, n, idx + 1);
    }
    else if (a[idx - 1] == v[v.size() - 1])
    {
        v.push_back(a[idx]);
        subarray(v, a, n, idx + 1);
    }
}
int main()
{
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int k = i; k < n; k++)
    //     {
    //         for (int j = i; j <= k; j++)
    //         {
    //             cout << a[j];
    //         }
    //         cout << endl;
    //     }
    // }
    vector<int> v;
    subarray(v, a, n, 0);
}