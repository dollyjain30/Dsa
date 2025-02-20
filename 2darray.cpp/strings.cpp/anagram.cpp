#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()

{
    string s = "dolly";
    string t = "llody";
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}
