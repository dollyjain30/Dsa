#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
#include<string>
using namespace std;

int f(string s, int i, int j, bool isTrue) {
    if (i > j) return 0;
    if (i == j) {
        if (isTrue == true) {
            return s[i] == 'T';     
        }
        else {
            return s[i] == 'F';
        }
    }
    int ans = 0;
    for (int k = i + 1; k < j; k += 2) {
        int lt = f(s, i, k - 1, true);
        int lf = f(s, i, k - 1, false);
        int rt = f(s, k + 1, j, true);
        int rf = f(s, k + 1, j, false);
        if (s[k] == '&') {
            if (isTrue == true) {
                ans += lt * rt;
            }
            else {
                ans += lt * rf + lf * rt + lf * rf;
            }
        }
        else if (s[k] == '|') {
            if (isTrue == true) {
                ans += lt * rt + lt * rf + lf * rt;
            }
            else {
                ans += lf * rf;
            }
        }
        else if (s[k] == '^') {
            if (isTrue == true) {
                ans += lt * rf + rt * lf;
            }
            else {
                ans += lt * rt + lf * rf;
            }
        }
    }
    return ans;
}


int main() {
    string s = "T^F&T";
    cout << f(s, 0, s.size() - 1, true);
    return 0;
}
