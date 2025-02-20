#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int c = 0;
void merge(vector<int> &arr, vector<int> &brr, vector<int> &res)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < arr.size() && j < brr.size())
    {
        if (arr[i] < brr[j])
        {

            res[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            res[k] = brr[j];
            k++;
            j++;
        }
        if (i == arr.size())
        {
            while (j < brr.size())
            {
                res[k] = brr[j];
                k++;
                j++;
            }
        }
        if (j == brr.size())
        {
            while (i < arr.size())
            {
                res[k] = arr[i];
                k++;
                i++;
            }
        }
    }
}
// magic
int inversions(vector<int> &v1, vector<int> &v2)
{
    int count = 0;
    int i = 0;
    int j = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] > v2[j])
        {
            count += v1.size() - i;
            j++;
        }
        else
        {
            i++;
        }
    }
    return count;
}
void mergesort(vector<int> &arr)
{

    int n = arr.size();
    if (n == 1)
        return;
    int x = n / 2;
    int y = n - n / 2;
    vector<int> v1(x), v2(y);
    for (int i = 0; i < x; i++)
    {
        v1[i] = arr[i];
    }
    for (int i = 0; i < y; i++)
    {
        v2[i] = arr[i + x];
    }
    mergesort(v1);
    mergesort(v2);
    c += inversions(v1, v2);
    merge(v1, v2, arr);
    v1.clear();
    v2.clear();
}
int main()
{
    int a[] = {5, 1, 3, 0, 4, 9, 6};
    int n1 = sizeof(a) / sizeof(a[0]);
    vector<int> arr(a, a + n1);
    mergesort(arr);
    cout << c;
    return 0;
}