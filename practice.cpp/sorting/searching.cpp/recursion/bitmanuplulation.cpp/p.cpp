#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &res)
{
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] > b[j])
        {
            res[k] = b[j];
            j++;
            k++;
        }
        else
        {
            res[k] = a[i];
            i++;
            k++;
        }
        if (i == a.size())
        {
            while (j < b.size())
            {
                res[k] = b[j];
                j++;
                k++;
            }
        }
        if (j == b.size())
        {
            while (i < a.size())
            {
                res[k] = a[i];
                i++;
                k++;
            }
        }
    }
}
void mergesort(vector<int> &a)
{
    int n = a.size();
    if (n == 1)
        return;
    int n1 = n / 2;
    int n2 = n - n / 2;
    vector<int> arr(n1), brr(n2);
    // copy pasting
    for (int i = 0; i < n1; i++)
    {
        arr[i] = a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        brr[i] = a[i + n1];
    }
    mergesort(arr);
    mergesort(brr);
    merge(arr, brr, a);
}
int main()
{
    int arr[] = {3, 4, 5, 2, 1, 9};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    vector<int> a(arr, arr + n1);
    for (int i = 0; i < n1; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    mergesort(a);
    for (int i = 0; i < n1; i++)
    {
        cout << a[i] << " ";
    }
}