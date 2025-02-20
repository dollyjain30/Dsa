#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int binarytodecimal(string &binary)
{
    int n = binary.size();
    int result = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        char ch = binary[i];
        int num = ch - '0';
        result = result + num * (1 << (n - i - 1));
    }
    return result;
}
string decimaltobinary(int num)
{
    string result = "";
    while (num > 0)
    {
        if (num % 2 == 0)
        {
            result = "0" + result;
        }
        else
        {
            result = "1" + result;
        }
        num = num / 2;
    }
    return result;
}
int main()
{
    string str = "001101";
    cout << binarytodecimal(str) << " " << endl;
    cout << decimaltobinary(13);
    return 0;
    // set bit // array questions bit manipulation
    
}