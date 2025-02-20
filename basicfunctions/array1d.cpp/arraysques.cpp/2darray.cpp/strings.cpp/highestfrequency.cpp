#include <iostream>
using namespace std;
int main()

{
    string s = "aabbdddbb";
    int n = s.length();
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] == s[i])
                count++;
        }
        if (max < count)
            max = count;
    }
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] == s[i])
                count++;
        }
        if (max == count)
        {

            cout << ch << " " << max;
            cout << endl;
        }
    }
}