#include <iostream>
#include <map>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(3);
    for (int ele : s)
    {
        cout << ele;
    }
    return 0;
}