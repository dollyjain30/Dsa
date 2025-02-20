#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main()

{
    string str[] = {"00123", "0023", "456", "00182", "940", "002901"};
    int max = stoi(str[0]);
    string maxs = str[0];
    for (int i = 0; i <= 5; i++)
    {
        int x = stoi(str[i]);
        if (max < x)
        {
            max = x;
            maxs = str[i];
        }
    }

    cout << max << endl;
    cout << maxs;
}