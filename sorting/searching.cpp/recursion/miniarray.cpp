#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
// void display(int a[], int n, int idx)
// {
//     if (idx == n)
//         return;
//     cout << a[idx] << " ";
//     display(a, n, idx + 1);
// }
void printmax(int a[], int n, int idx, int min)
{
    if (idx == n)

    {
        cout << min;
        return;
    }
    if (min > a[idx])
        min = a[idx];
    printmax(a, n, idx + 1, min);
}
int main()
{
    int a[] = {1, 2, 31, 49, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    // display(a, n, 0);
    printmax(a, n, 0, INT_MAX);
}