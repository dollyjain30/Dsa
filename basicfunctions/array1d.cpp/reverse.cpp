#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void reversepartofarray(int i, int j, vector<int> &v)
{
    while (i <= j)
    {
        // swapping
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(1);
    v.push_back(9);
    display(v);
    int k = 2, n = v.size();
    reversepartofarray(0, n - k - 1, v);
    reversepartofarray(n - k, n - 1, v);
    reversepartofarray(0, n - 1, v);
    display(v);
    return 0;
}