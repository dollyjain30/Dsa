#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
void combinationsum(vector<int> v, int arr[], int n, int target, int idx)
{
    if (target == 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }
    if (target < 0)
        return;
    for (int i = idx; i < n; i++)
    {
        v.push_back(arr[i]);
        combinationsum(v, arr, n, target - arr[i], i);
        v.pop_back();
    }
}
int main()
{
    int arr[] = {2, 3, 5};
    vector<int> v;
    combinationsum(v, arr, 3, 8, 0);
}