#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int x = 6;
    int a[5] = {1, 2, 3, 2, 5};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
                if (a[i] + a[j] + a[k] == x)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}