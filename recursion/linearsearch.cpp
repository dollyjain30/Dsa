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
int linearsearch(int a[], int n, int idx, int x)
{
    if (idx == n)
        return -1;
    if (a[idx] == x)
        return idx;
    return linearsearch(a, n, idx + 1, x);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 3;
    // display(a, n, 0);
    cout << linearsearch(a, n, 0, x);
}