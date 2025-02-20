#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(2); // to store unique elements
    int target = 4;
    // if (s.find(target) != s.end())
    // {
    //     cout << "exits " << endl;
    // }
    if (s.find(target) != s.end())
    {
        cout << "exists" << endl;
    }
    else
    {
        cout << "does not exits";
    }
    for (int x : s)
    {
        cout << x << " "; // random order
        // for each element
    }
}