#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s = "1984873";
    // int count = 0;
    // bool flag = true;
    // if (i % 2 != 0)
    // {
    //     s[i] = '#';
    // }
    // if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
    // {
    //     count++;
    // }
    int n = s.length();
    // string t = s;
    // reverse(t.begin(), t.end());
    // for (int i = 0; i < n / 2; i++)
    // {

    //     if (s[i] != s[n - 1 - i])
    //     {
    //         flag = false;
    //         break;
    //     }
    // }
    // if (flag == true)
    // {
    //     cout << "palindrome";
    // }
    // else
    // {
    //     cout << "not palindrome";
    // }
    // reverse(s.begin() + n / 2, s.end());
    // cout << s;
    // int product = 1;
    // int ans = 0;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     ans += (s[i] - '0') * product;
    //     product *= 10;
    // }
    // cout << ans;
    // s += t;
    // cout << s;
    char max1 = '!';
    char max2 = '!';
    for (int i = 0; i < n; i++)
    {
        if (s[i] > max1)
        {
            max2 = max1;
            max1 = s[i];
        }
        else if (s[i] > max2 && s[i] != max1)
        {
            max2 = s[i];
        }
    }
    if (max2 == '!')
    {
        cout << "no second largest element exist";
    }
    cout << max2;
}