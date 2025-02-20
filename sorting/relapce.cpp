// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// #include <climits>
// using namespace std;
// int main()
// {
//     int arr[] = {19, 12, 23, 8, 16};
//     int n = 5;
//     vector<int> v(n, 0);
//     int x = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     for (int i = 0; i < n; i++)
//     {
//         int min = INT_MAX;
//         int minidx = -1;
//         for (int j = 0; j < n; j++)
//         {
//             if (v[j] == 1)
//                 continue;
//             else
//             {
//                 if (min > arr[j])
//                 {
//                     min = arr[j];
//                     minidx = j;
//                 }
//             }
//         }
//         arr[minidx] = x;
//         v[minidx] = 1;
//         x++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 1, 1, 1, 2};
    int x = 5;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << "element " << x << " is present " << count << " times";
    }
    else
    {
        cout << "element is not present";
    }
}