#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
void printsubset(string ans, string original) // vector<string> &v)
{
    if (original.length() == 0)
    {
        cout << ans << endl;
        // v.push_back(ans);
        return;
    }
    char ch = original[0];

    printsubset(ans + ch, original.substr(1)); // v);
    printsubset(ans, original.substr(1));      //, v);
}
int main()
{
    string str = "abc";
    vector<string> v;
    printsubset("", str); //, v);
    // for (string ele : v)
    // {
    //     cout << ele << endl;
    // }
}