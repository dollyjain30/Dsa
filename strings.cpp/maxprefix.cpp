#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main()

{
    vector<string> v;
    v.push_back("flower");
    v.push_back("floght");
    v.push_back("flow");
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    if (v.size() == 1)
        cout << v[0];
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    string one = v[0];
    string last = v[n - 1];
    string s = "";
    for (int i = 0; i < min(one.size(), last.size()); i++)
    {
        if (one[i] == last[i])
            s += one[i];
        else
            break;
    }
    cout << s;
}