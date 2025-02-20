#define ll long long int
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring> // Include <cstring> for std::memset
using namespace std;

// two tourist top left one and other at bottom right //
// t1 top left to bottom right
// t2 bottom right to top left 
ll n,m;
char mat[105][105];
ll dp[105][105][105];

int f (ll i,ll j ,ll x,ll y){
    //base case
    if(i > n || j > m || x > n || y > m || mat[i][j] == '#' || mat[x][y] == '#') return 0;
    // x+y==i+j(bb)(br)(rb)(rr)
    if(i == n && j == m){
        return mat[i][j] == '*';
    }
    if(dp[i][j][x] != -1) return dp[i][j][x];

    ll result = INT_MIN;
    result = max(result, f(i + 1, j, x + 1, y));
    result = max(result, f(i + 1, j, x, y + 1));
    result = max(result, f(i, j + 1, x + 1, y));
    result = max(result, f(i, j + 1, x, y + 1));
    result += (mat[i][j] == '*');
    result += (mat[x][y] == '*');

    // avoid repetition
    if(i == x && j == y && mat[i][j] == '*') result--;
    return dp[i][j][x] = result;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n;
        memset(dp, -1, sizeof dp);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> mat[i][j];
            }
        }
        cout << f(1, 1, 1, 1) << endl;
    }

    return 0;
}

// two tourist top left one and other at bottom right //
// t1 top left to bottom right
// t2 bottom right to top left 
