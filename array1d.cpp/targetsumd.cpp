#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "enter the size :";
    cin >> n;
    int x;
    cout << "enter the target sum :";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }
    for (int i = 0; i < v.size() - 2; i++)
    {
        for (int j = i + 1; j < v.size() - 1; j++)
        {
            if (v[i] + v[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
    return 0;
}