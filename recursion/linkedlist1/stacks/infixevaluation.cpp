#include <iostream>
#include <stack>
using namespace std;
int priority(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}
int solve(int val1, int val2, char ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else
        return val1 / val2;
}
int main()
{
    string s = "2+6*4/8-3"; // infix expression
    // we need two values one for values and other for operators//
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < s.length(); i++)
    {
        // int ascii=(int)s[i];
        if (s[i] >= 48 && s[i] <= 57)
        {
            val.push(s[i] - 48);
        }
        else
        {
            if (op.size() == 0)
                op.push(s[i]);
            else if (priority(s[i]) > priority(op.top()))
            {
                op.push(s[i]);
            }
            else
            {
                while (op.size() > 0 && priority(s[i]) <= priority(op.top()))
                {
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while (op.size() > 0)
    {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout << val.top();
    return 0;
}