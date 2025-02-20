#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int main()
{
    vector<int> s;
    s.push_back(16);
    s.push_back(15);
    s.push_back(14);
    s.push_back(7);

    vector<int> g;
    g.push_back(10);
    g.push_back(9);
    g.push_back(8);
    g.push_back(7);
    sort(s.begin(), s.end());
    sort(g.begin(), g.end());
    int count = 0;
    int i = 0;
    int j = 0;
    while (i < g.size() && j < s.size())
    {
        if (s[j] >= g[i])
        {
            count++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout << count;
    
    return 0;
}