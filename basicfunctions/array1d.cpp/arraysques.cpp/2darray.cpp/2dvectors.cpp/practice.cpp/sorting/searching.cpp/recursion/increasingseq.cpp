#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
void printsubset(int arr[], int n, int index, vector<int> ans, int k)
{
    if (index == n)
    {
        if (ans.size() == k)
        {
            for (int i = 0; i < k; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    if (ans.size() + (n - index) < k)
        return;
    printsubset(arr, n, index + 1, ans, k);
    ans.push_back(arr[index]);
    printsubset(arr, n, index + 1, ans, k);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    vector<int> v;
    int k = 3;
    printsubset(arr, n, 0, v, k);
    // for (int ele : v)
    // {
    //     cout << ele << endl;
    // }
}
