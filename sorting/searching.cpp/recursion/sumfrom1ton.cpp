#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int sum12n(int sum, int n)
{

    if (n == 0)
    {
        cout << sum;
        return 1;
    }
    sum12n(sum + n, n - 1);
}
int main()
{
    sum12n(0, 10);
}