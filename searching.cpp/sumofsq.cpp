#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
using namespace std;
bool isperfectsquare(int n)
{
    int root = sqrt(n);
    if (root * root == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int c = 41;
    int x = 0;
    int y = c;
    while (x <= y)
    {
        if (isperfectsquare(x) && isperfectsquare(y))
        {
            cout << x << y;
            x++;
            y--;
            cout << x;
        }
    }
    cout << x << y;
}
