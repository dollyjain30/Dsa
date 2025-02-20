#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    pair<string, int> p1;
    // p1.first = "Dolly";
    // p1.second = 23;
    pair<string, int> p2;
    // p2.first = "guddan";
    // p2.second = 67;
    pair<string, int> p3;
    // p3.first = "raghav";
    // p3.second = 90;
    m.insert(p1);
    m["dolly"] = 12;
    m.insert(p2);
    m["guddan"] = 67;
    m.insert(p3);
    m["riya"] = 90;
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}