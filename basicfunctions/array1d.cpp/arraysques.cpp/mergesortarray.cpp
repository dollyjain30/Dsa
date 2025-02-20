#include <iostream>
#include <vector>
using namespace std;
vector<int> mergesort(vector<int> &v1, vector<int> &v2)
{
    int n = v1.size();
    int m = v2.size();
    vector<int> res(m + n);
    int i = 0;
    int j = 0;
    int k = 0;
    while (i <= n - 1 && j <= m - 1)
    {
        if (v1[i] < v2[j])
        {
            res[k] = v1[i];
            i++;
            k++;
        }
        else
        {
            res[k] = v2[j];
            k++;
            j++;
        }
    }
    if (i == n)
    {
        while (j <= m - 1)
        {
            res[k] = v2[j];
            j++;
            k++;
        }
    }
    if (j == m)
    {
        while (i <= n - 1)
        {
            res[k] = v1[i];
            k++;
            i++;
        }
    }
    return res;
}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << endl;
    vector<int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
    vector<int> v = mergesort(v1, v2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}