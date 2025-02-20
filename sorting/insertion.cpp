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
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1)
        {
            if (arr[j] >= arr[j - 1])
                break;
            else
            {
                swap(arr[j], arr[j - 1]);
                j--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}