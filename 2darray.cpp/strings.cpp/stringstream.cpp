#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main()

{
    string s = "dolly jain is my name";
    stringstream ss(s);
    string temp;
    while (ss >> temp)
    {
        cout << temp << endl;
    }
}