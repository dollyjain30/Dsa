#include <iostream>
#include <vector>
using namespace std;
void sort0end(vector<int> &v)
{
    int i = 0;
    int n = v.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            j++;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(9);
    v.push_back(0);
    v.push_back(2);
    v.push_back(4);
    v.push_back(0);
    v.push_back(8);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort0end(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}