#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main()

{
    string str = "1234";
    int x = stoi(str);

    cout << x + 1 << endl;
    string so = "12345678912";
    long long y = stoll(so);
    cout << y << endl;
    int a = 123455;
    string s = to_string(a);
    cout << s;
}