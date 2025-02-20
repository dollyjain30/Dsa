#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// int sorted_array(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }
int main()
{
    //     int a[6] = {2, 5, 3, 7, 1, 4};
    //     int i, j;
    //     int n = 6;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << a[i] << " ";
    //     }
    //     for (i = 0; i < n - 1; i++)
    //     {
    //         bool flag = true;
    //         for (j = 0; j < n - 1 - i; j++)
    //         {
    //             if (a[j] > a[j + 1])
    //             {
    //                 int temp = a[j];
    //                 a[j] = a[j + 1];
    //                 a[j + 1] = temp;
    //                 flag = false;
    //             }
    //         }
    //         if (flag == true)
    //         {
    //             break;
    //         }
    //     }

    //     cout << endl;
    //     sorted_array(a, n);

    string s = "AGVBDTNCUNMISXYZ";
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'X')
        {
            str.push_back(s[i]);
        }
    }
    sort(str.begin(), str.end());
    cout << str;
    return 0;
}