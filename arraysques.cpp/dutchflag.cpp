#include <iostream>
#include <vector>
using namespace std;
void sort012(vector<int> &v) // pass by reference
{
    // 3 pointers low mid high //
    // mid k sath changes kar ne hai //

    int l = 0;
    int n = v.size();
    int m = 0;
    int h = n - 1;
    while (m <= h) // condition
    {
        if (v[m] == 2)
        {
            // swap(mid and high h--)
            int temp = v[m];
            v[m] = v[h];
            v[h] = temp;
            h--;
        }
        else if (v[m] == 0)
        {
            // swap(lo,mid l++ m++)
            int temp = v[m];
            v[m] = v[l];
            v[l] = temp;
            l++;
            m++; // mid>low
        }
        else if (v[m] == 1)
        {

            m++;
        }
    }
    return;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort012(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}