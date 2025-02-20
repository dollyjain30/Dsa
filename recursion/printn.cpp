#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int print(int n)
{
    if (n == 0)
        return 1;
    print(n - 1);
    cout << n << " ";
    return 0;
}
// using extra parameter//
// int print(int i, int n)
// {
//     if (i > n)
//         return 1;
//     cout << i << endl;
//     ;
//     return print(i + 1, n);
// }
int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    // print(6);
    print(n);
}