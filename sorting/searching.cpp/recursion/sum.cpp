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
void printmax(int a[], int n, int idx, int sum)
{
    if (idx == n)

    {
        cout << sum;
        return;
    }

    sum += a[idx];
    printmax(a, n, idx + 1, sum);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    // display(a, n, 0);
    printmax(a, n, 0, 0);
}