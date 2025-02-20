#include <iostream>
#include <algorithm>
using namespace std;
int main()

{
    string s;
    cin >> s;
    int ans = 0;
    int product = 1;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        ans += (s[i] - '0') * product;
        product *= 10;
    }
    cout << ans;
}