#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int partition(int a[], int si, int ei)
{
    int pivotelement = a[si];
    int count = 0;
    for (int i = si + 1; i <= ei; i++)
    {
        if (a[i] <= pivotelement)
            count++;
    }
    int pivotindex = count + si;
    swap(a[si], a[pivotindex]);
    int i = si;
    int j = ei;
    while (i < pivotindex && j > pivotindex)
    {
        if (a[i] <= pivotelement)
            i++;
        if (a[j] > pivotelement)
            j--;
        else if (a[i] > pivotelement && a[j] <= pivotelement)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    return pivotindex;
}
int kthsmallest(int a[], int si, int ei, int k)
{

    int pi = partition(a, si, ei);
   
    cout << endl;
    if (pi + 1 == k)
        return a[pi];
    else if (pi + 1 < k)
        return kthsmallest(a, pi + 1, ei, k);
    else
        return kthsmallest(a, si, pi - 1, k);
}
int main()

{
    int a[] = {5, 18, 82, 20, 7, 6, 31, 4, -8};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int k = 4;
    cout << kthsmallest(a, 0, n - 1, k);
    // quicksort(a, 0, n - 1);
    // for (int i = 0; i < 8; i++)
    // {
    //     cout << a[i] << " ";
    // }
}