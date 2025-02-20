#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<vector<int>>(v);
    vector<int> v1;
    v1.push_back(0);
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(1);
    vector<int> v2;
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);
    v2.push_back(0);

    vector<int> v3;
    v3.push_back(1);
    v3.push_back(1);
    v3.push_back(0);
    v3.push_back(0);
    int m = v.size();
    int t = v[0].size();
    // zero column all ones row flip //
    for (int i = 0; i < m; i++)
    {
        if (v[i][0] == 0)
        {
            for (int j = 0; j < t; j++)
            {
                if (v[i][j] == 0)
                    v[i][j] = 1;
                else
                    v[i][j] = 0;
            }
        }
    }
    // filp the column where noz>noo//
    for (int j = 0; j < t; j++)
    {
        int noz = 0;
        int noo = 0;
        for (int i = 0; i < m; i++)
        {
            if (v[i][j] == 0)
                noz++;
            else
                noo++;
        }
        if (noz > noo)
        {
            for (int i = 0; i < m; i++)
            {
                if (v[i][j] == 0)
                    v[i][j] = 1;
                else
                    v[i][j] = 0;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        int x = 1;
        for (int j = t - 1; j >= 0; j--)
        {
            sum += v[i][j] * x;
            x *= 2;
        }
    }
    cout << sum;
}