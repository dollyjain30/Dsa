#include <iostream>
using namespace std;
int main()

{
    string s;
    getline(cin, s);
    cout << s << endl;
    int n = s.size();
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        // if (i % 2 != 0)
        // {
        //     s[i] = '#';
        // }
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            c++;
        }
    }
    cout << c;
}