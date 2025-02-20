#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
string countandsay(int n)
{
    if (n == 1)
        return "1";
    string str = countandsay(n - 1);
    string ztr = "";
    int freq = 1;
    char ch = str[0];
    for (int i = 0; i < str.length(); i++)
    {
        char dh = str[i];
        if (ch == dh)
        {
            freq++;
        }
        else
        {
            ztr += (to_string(freq) + ch);
            freq = 1;
            ch = dh;
        }
    }
    ztr += (to_string(freq) + ch);

    return ztr;
}
int main()
{

    int n = 3322251;
    cout << countandsay(3322251);
}