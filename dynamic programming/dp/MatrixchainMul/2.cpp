#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cstring>
#include<string>
using namespace std;
int t[1001][1001];
bool ispalindrome(string s, int i, int j) {
    while (i <= j) {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int solve(string s, int i, int j) {
    if (i >= j) return 0; // Base case
    if (ispalindrome(s, i, j)) return 0;
    if(t[i][j]!=-1) return t[i][j];
    int ans = INT_MAX;

    for (int k = i; k <= j - 1; k++) {
        int temp = solve(s, i, k) + solve(s, k + 1, j) + 1;
        ans = min(ans, temp);
       
    }
    return t[i][j]=ans;
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    memset(t,-1,sizeof(t));
    cout <<"ans -> " <<solve(s, 0, n - 1); 
    return 0;
}
