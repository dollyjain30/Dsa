#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int mazepath(int sr, int sc, int er, int ec)
{
    if (sc > ec || sr > er)
        return 0;
    if (sc == ec && sr == er)
        return 1;
    int rightways = mazepath(sr, sc + 1, er, ec);
    int downways = mazepath(sr + 1, sc, er, ec);
    int totalways = rightways + downways;
    return totalways;
}
void printpath(int sr, int sc, int er, int ec, string s)
{
    if (sc > ec || sr > er)
        return;
    if (sc == ec && sr == er)
    {
        cout << s << endl;
        return;
    }
    printpath(sr, sc + 1, er, ec, s + 'R');
    printpath(sr + 1, sc, er, ec, s + 'D');
}
int main()
{
    cout << mazepath(0, 0, 2, 2) << endl;
    printpath(0, 0, 2, 2, "");
    return 0;
}