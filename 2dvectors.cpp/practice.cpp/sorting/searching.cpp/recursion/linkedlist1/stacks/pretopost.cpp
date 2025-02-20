#include <iostream>
#include <stack>
using namespace std;

string solve(string val1, string val2, char ch)
{
    string s = "";
    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}
int main()
{
    string s = "-/*+79483"; // infix expression
    // we need two values one for values and other for operators//
    stack<string> val;
    // stack<char> op;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        // int ascii=(int)s[i];
        if (s[i] >= 48 && s[i] <= 57)
        {
            val.push(to_string(s[i] - 48));
        }
        else
        {
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val1, val2, s[i]);
            val.push(ans);
        }
    }

    cout << val.top();
    return 0;
}