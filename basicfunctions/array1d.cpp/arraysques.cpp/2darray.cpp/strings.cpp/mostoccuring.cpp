#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main()

{
    string s = "dolly jain is my name. she is pursuing her betch in computer science";
    stringstream ss(s);
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    int count = 1;
    int maxcount = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        maxcount = max(count, maxcount);
    }
    cout << maxcount << endl;

    count = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        if (count == maxcount)
        {
            cout << v[i] << " ";
        }
    }
}