#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int a[5];
    bool flag = true;
    cout << "enter the elements of the array";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    //     int max1 = INT_MIN;
    //     int max2 = INT_MIN;
    //     int max3 = INT_MIN;
    //     for (int i = 0; i < 5; i++)
    //     {
    //         cout << a[i] << " ";
    //     }
    //     for (int i = 0; i < 5; i++)
    //     {
    //         if (a[i] > max1)
    //         {
    //             max3 = max2;
    //             max2 = max1;
    //             max1 = a[i];
    //         }
    //         else if (a[i] > max2 && a[i] != max1)
    //         {
    //             max3 = max2;
    //             max2 = a[i];
    //         }
    //         else if (a[i] > max3 && a[i] != max2 && a[i] != max3)
    //         {
    //             max3 = a[i];
    //         }
    //     }
    //     cout << endl;
    //     cout << max1 << endl;
    //     cout << max2 << endl;
    //     cout << max3 << endl;
    // }
    // int min = a[0];
    // for (int i = 0; i < 5; i++)
    // {
    //     if (min > a[i])
    //     {
    //         min = a[i];
    //     }
    // }
    // cout << min;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i + 1; j < 5; j++)
    //     {
    //         if (a[i] == a[j])
    //         {
    //             cout << a[i] << " ";
    //             flag = true;
    //             break;
    //         }
    //     }
    // }
    // if (flag == false)
    // {
    //     cout << "no duplicate present";
    // }
    // else
    // {
    //     cout << "duplicate present";
    // }
    int x = 1;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] <= 0)
        {
            continue;
        }
        else if (a[i] > x)
        {
            cout << x;
            break;
        }
        else
        {
            x++;
        }
    }
    // int n, count = 0;
    // cin >> n;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (a[i] > n)
    //     {
    //         count++;
    //     }
    // }
    // cout << count;
    // for (int i = 1; i <= 5; i++)
    // {

    //     if (a[i - 1] > a[i])
    //     {
    //         flag = false;
    //         cout << "unsorted";
    //         break;
    //     }
    // }
    // if (flag == true)
    // {
    //     cout << "sorted";
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (a[i] == a[j] && i != j)
    //         {
    //             count++;
    //         }
    //     }

    //     if (count == 0)
    //     {
    //         cout << a[i];
    //     }
    // }

    //     }
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     if (a[i] != a[4 - i])
    //     {
    //         flag = false;
    //         cout << "not a palindrome";
    //         break;
    //     }
    // }
    // if (flag == true)
    // {
    //     cout << "it is palindrome";
    // }

    return 0;
}