#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(19);
    v.push_back(12);
    v.push_back(23);
    v.push_back(8);
    v.push_back(16);

    int n = v.size();
    sort(v.begin(), v.end());
    cout << v[n / 2];
}
