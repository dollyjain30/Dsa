#include <iostream>
#include <algorithm>
using namespace std;
int main()

{
    string s = "abcdefgh";
    // cout << s.size() << endl;
    // s.push_back(' ');
    // s.push_back('j');

    // s.push_back('a');
    // s.push_back('i');
    // s.push_back('n');
    // //cout << s << endl;
    // s.pop_back();
    // s.pop_back();
    // s.pop_back();
    // s.pop_back();
    // cout << s << endl;
    // string t = "jain";
    // s = s + t;
    // cout << s << endl;
    // reverse(s.begin(), s.end());
    // cout << s << endl;
    reverse(s.begin(), s.begin() + 4);
    cout
        << s;
}
