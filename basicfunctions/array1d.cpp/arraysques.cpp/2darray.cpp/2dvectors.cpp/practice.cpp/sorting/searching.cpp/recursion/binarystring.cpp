#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
void generate(string s, int n)

{
    if (s.length() == n)
    {
        cout << s << endl;
        return;
    }
    generate(s + '0', n);
    if (s == "")
    {
        generate(s + '1', n);
    }
    else if (s[s.length() - 1] == '0')
    {
        generate(s + '1', n);
    }
}
int main()
{
    int n;
    generate("", 3);
}