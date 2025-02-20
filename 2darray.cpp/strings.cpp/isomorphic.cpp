#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main()
// isomorphic//

{
    string s = "badc";
    string t = "baba";
    if (s.length() != t.length())
    {
        cout << "not isomorphic";
    }
    vector<int> v(150, 1000);
    for (int i = 0; i < s.length(); i++)
    {
        int idx = (int)s[i];
        if (v[idx] == 1000)
        {
            v[idx] = s[i] - t[i];
        }
        else if (v[idx] != (s[i] - t[i]))
        {
            cout << "false";
        }

        for (int i = 0; i < 150; i++)

            v[i] = 1000;

        for (int i = 0; i < s.length(); i++)
        {
            int idx = (int)t[i];

            if (v[idx] == 1000)
            {
                v[idx] = t[i] - s[i];
            }
            else if (v[idx] != (t[i] - s[i]))
            {
                cout << "false";
            }
        }
        cout << "true";
        break;
    }
}