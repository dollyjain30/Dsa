#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
#include<string>
using namespace std;

int static t[1001][1001];

int fbt(string x, string y, int n, int m) {
    for(int i = 0; i < n + 1; i++) {
        for(int j = 0; j < m + 1; j++) {
            if(i == 0 || j == 0) {
                t[i][j] = 0;
            }
        }
    }

    int longest = 0; 

    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < m + 1; j++) {
            if(x[i - 1] == y[j - 1]) {
                t[i][j] = 1 + t[i - 1][j - 1];
                longest = max(longest, t[i][j]); 
            }
            else {
                t[i][j] = 0; 
            }
        }
    }
    return longest; 
    
}

int main() {
    string x, y;
    cin >> x >> y;
    int n = x.size();
    int m = y.size();
    
    cout << fbt(x, y, n, m);

    return 0;
}
