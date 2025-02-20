#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
void fun(int n)
{
    if (n == 0)
        return;
    cout << "hello" << endl;
    fun(n - 1);
}
int main()
{
    fun(4);
    cout << "dolly" << endl;
    fun(7);
}
