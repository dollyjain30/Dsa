#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
void printsubset(string ans, string original, vector<string> &v, bool flag)
{
    if (original.length() == 0)
    {
        // cout << ans << endl;
        v.push_back(ans);
        return;
    }

    char ch = original[0];
    if (original.length() == 1)
    {
        printsubset(ans + ch, original.substr(1), v, true);
        printsubset(ans, original.substr(1), v, true);
        return;
    }
    char dh = original[1];
    if (ch == dh)
    {
        // left call---->X X
        printsubset(ans + ch, original.substr(1), v, true);
        printsubset(ans, original.substr(1), v, false);
        return;
    }
    else
    {
        if (flag == true)
            printsubset(ans + ch, original.substr(1), v, true);
        printsubset(ans, original.substr(1), v, true);
    }
}
int main()
{
    string str = "aab";
    vector<string> v;
    printsubset("", str, v, true);
    for (string ele : v)
    {
        cout << ele << endl;
    }
}