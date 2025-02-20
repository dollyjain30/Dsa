#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void nextpermutation(vector<int> &v)
{
    int n = v.size();
    int idx = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    {
        reverse(v.begin(), v.end());
        return;
    }
    reverse(v.begin() + idx + 1, v.end());
    int j = -1;
    for (int i = idx + 1; i < n; i++)
    {
        if (v[i] > v[idx])
        {
            j = i;
            break;
        }
    }
    int temp = v[idx];
    v[idx] = v[j];
    v[j] = temp;
    return;
}
int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "next permutation " << endl;
    nextpermutation(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
