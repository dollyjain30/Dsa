#include <iostream>
#include <vector>
using namespace std;
void firstrepeating(vector<int> v, int n)
{
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (i != j && v[i] == v[j])
            {
                break;
            }
        }
        if (j == n)
        {
            cout << v[i] << " is the first non-repeating element";
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "no repeating element is present in the array";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    firstrepeating(v, n);
}