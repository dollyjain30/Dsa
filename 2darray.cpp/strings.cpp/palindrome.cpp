#include <iostream>
using namespace std;
int main()

{
    string s;
    bool flag = true;
    getline(cin, s);
    cout << s << endl;
    int n = s.size();
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            flag = false;
            cout << "not palindrome";
            break;
        }
        j--;
        i++;
    }
    if (flag == true)
    {
        cout << "palindrome";
    }
}