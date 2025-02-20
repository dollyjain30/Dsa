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
void quicksort(int a[], int si, int ei)
{
    if (si >= ei)
        return;
    int pi = partition(a, si, ei);
    quicksort(a, si, pi - 1);
    quicksort(a, pi + 1, ei);
}
int main()

{
    int a[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    quicksort(a, 0, n - 1);
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << " ";
    }
}