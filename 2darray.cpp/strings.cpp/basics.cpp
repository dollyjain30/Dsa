#include <iostream>
using namespace std;
int main()

{
    //     string s = "hello guys dolly jain this side";
    //     int count = 0;
    //     int i = 0;
    //     while (s[i] != '\0')
    //     {
    //         if (s[i] == 'i' || s[i] == 'e' || s[i] == 'a' || s[i] == 'o' || s[i] == 'u')
    //         {
    //             count++;
    //         }
    //         i++;
    //     }
    //     cout << count;
    string s = "dolly";
    int i = 0;
    while (s[i] != '\0')
    {
        if (i % 2 == 0)
        {
            s[i] = 'a';
        }
        i++;
    }
    cout << s;
    return 0;
}