#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
void hanoi(int n, char a, char b, char c)
{
    if (n == 0)
        return;
    hanoi(n - 1, a, c, b);
    cout << a << "->" << c << endl;
    hanoi(n - 1, b, a, c);
}
int main()
{
    int n = 4;
    hanoi(4, 'A', 'B', 'C');
}