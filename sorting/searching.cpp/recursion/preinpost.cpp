#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
void pip(int n)
{
    if (n == 0)
        return;
    cout << n;
    pip(n - 1);
    cout << n;
    pip(n - 1);
    cout << n;
}
int main()
{
    pip(3);
}